/**
 * Copyright 2018 Jun Bo Bi <jambonmcyeah@gmail.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License or (at your option) version 3 or any later version
 * accepted by the membership of KDE e.V. (or its successor approved
 * by the membership of KDE e.V.), which shall act as a proxy
 * defined in Section 14 of version 3 of the license.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef MPRISCONTROLPLUGINWIN_H
#define MPRISCONTROLPLUGINWIN_H

#include <core/kdeconnectplugin.h>

#include <QString>
#include <QLoggingCategory>

#define PLAYERNAME QStringLiteral("Media Player")

#define PACKET_TYPE_MPRIS QStringLiteral("kdeconnect.mpris")

Q_DECLARE_LOGGING_CATEGORY(KDECONNECT_PLUGIN_MPRIS)

class MprisControlPlugin
    : public KdeConnectPlugin
{
    Q_OBJECT

  public:
    explicit MprisControlPlugin(QObject *parent, const QVariantList &args);

    bool receivePacket(const NetworkPacket &np) override;
    void connected() override {}

  private:
    const QString playername = PLAYERNAME;
};
#endif //MPRISCONTROLPLUGINWIN_H
