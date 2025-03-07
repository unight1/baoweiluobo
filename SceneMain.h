#ifndef __SCENCEMAIN_SCENE_H__
#define __SCENCEMAIN_SCENE_H__

#include "SceneBase.h"

class SceneBase;
class Scene1 : public SceneBase
{
public:
    static Scene1* createScene(int level, LevelScene* levelScene);
    virtual bool init(int level, LevelScene* levelScene) override;
    virtual void initMonster(int choose) override;
    void updateWave(float t);
    virtual ~Scene1() {};
};

class Scene2 : public SceneBase
{
public:
    static Scene2* createScene(int level, LevelScene* levelScene);
    virtual bool init(int level, LevelScene* levelScene) override;
    virtual void initMonster(int choose) override;
    void updateWave(float t);
    // ������
    virtual ~Scene2() {};
protected:
    std::vector<Vec2> path1;
};

class Scene3 : public SceneBase
{
public:
    static Scene3* createScene(int level, LevelScene* levelScene);
    virtual bool init(int level, LevelScene* levelScene) override;
    virtual void initMonster(int choose) override;
    void updateWave(float t);
    // ������
    virtual ~Scene3() {};

};
#endif // __SCENCEMAIN_SCENE_H__