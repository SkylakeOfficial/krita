/*
 *  Copyright (c) 2016 Jouni Pentikäinen <joupent@gmail.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef _KIS_TRANSFORM_ARGS_KEYFRAME_CHANNEL_H
#define _KIS_TRANSFORM_ARGS_KEYFRAME_CHANNEL_H

#include "kis_keyframe_channel.h"
#include "kis_keyframe_commands.h"
#include "tool_transform_args.h"
#include "kundo2command.h"


class KisTransformArgsKeyframeChannel : public KisKeyframeChannel
{
public:
    KisTransformArgsKeyframeChannel(const KoID &id, KisNodeWSP parent, const ToolTransformArgs &initialValue);

    ToolTransformArgs &transformArgs(KisKeyframeSP keyframe) const;
    bool hasScalarValue() const;

private:
    friend class KisAnimatedTransformMaskParameters; // TODO: Ugly...

    KisKeyframeSP createKeyframe() override;
    QPair<int, KisKeyframeSP> loadKeyframe(const QDomElement &keyframeNode);
    void saveKeyframe(KisKeyframeSP keyframe, QDomElement keyframeElement, const QString &layerFilename);

    QRect affectedRect(int time) const override;
};

#endif
