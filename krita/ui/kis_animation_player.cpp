/*
 *  Copyright (c) 2013 Somsubhra Bairi <somsubhra.bairi@gmail.com>
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
 */

#include "kis_animation_player.h"
#include <./kranimstore/kis_animation_store.h>
#include <QTimer>
#include <kis_animation.h>

struct KisAnimationPlayer::Private
{
public:
    KisAnimationDoc* doc;
    KisAnimationStore* store;
    KisAnimation* animation;
};

KisAnimationPlayer::KisAnimationPlayer(KisAnimationDoc *doc)
{
    d->doc = doc;
    d->store = doc->getStore();
    d->animation = doc->getAnimation();
}

void KisAnimationPlayer::play()
{

}

void KisAnimationPlayer::pause()
{

}

void KisAnimationPlayer::stop()
{

}
