#pragma once

#ifndef __SETTING_SCENE_H__
#define __SETTING_SCENE_H__

#include "cocos2d.h"
#include "ui/CocosGUI.h"


class SettingScene : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene();

    //��ʼ��
    virtual bool init();

    //��������
    void SettingScene::checkBoxEvent(Ref* sender, cocos2d::ui::CheckBox::EventType type);


    //���ر������
    void goBack(cocos2d::Ref* pSender);
    

    // implement the "static create()" method manually
    CREATE_FUNC(SettingScene);
};

#endif