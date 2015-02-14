//
//  BoardPiece.h
//  BoardGame
//
//  Created by Salmon on 2015. 2. 13..
//
//

#ifndef __BoardGame__BoardPiece__
#define __BoardGame__BoardPiece__
class BoardPiece : public cocos2d::Sprite {
protected:
    int itsPlayer;
    int itsType;
    BoardPiece();
    BoardPiece(int _player, int _type);
    ~BoardPiece();
public:
    static BoardPiece* createWithImageName(const std::string &filename);
    static BoardPiece* createWithImageName(const std::string &filename, int _player, int _type);
    int GetPlayer();
    int GetType();
};

#endif /* defined(__BoardGame__BoardPiece__) */
