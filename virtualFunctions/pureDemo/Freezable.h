#pragma once

// Pure Virtual class
/* Freeze or unfreeze objects!! */
class Freezable
{
public:
    virtual void freeze() = 0;
    virtual void unfreeze() = 0;
};
