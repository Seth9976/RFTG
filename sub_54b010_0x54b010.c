// 函数名称: sub_54b010
// 虚拟地址: 0x54b010
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __thiscallsub_54b010(void* arg1, float* arg2)
{
    // 第一条实际指令: void* edx = data_27e7fe4
    void* edx = data_27e7fe4
    
    if (*(edx + 0xdc) != 0)
        sub_4c5870("!gpRenderAppData->uiProjectedInto3D", &data_83f3d3, "OpenGLGraphics.cpp", 0x150b, 
            "OpenGLInterface::GetUIMatrix")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* eax_1 = data_27e7fd0
    __builtin_memcpy(arg2, 0x83faf8, 0x40)
    *arg2 = fconvert.s(fconvert.t(2.0) / float.t(*(eax_1 + 0x14)))
    arg2[5] = fconvert.s(fconvert.t(-2.0) / float.t(*(eax_1 + 0x18)))
    arg2[3] = fconvert.s(fconvert.t(-1f))
    arg2[7] = fconvert.s(float.t(1))
    float var_48[0x10]
    sub_406020(&var_48, edx + 0x9c, arg2)
    void var_88
    __builtin_memcpy(&var_88, &var_48, 0x40)
    __builtin_memcpy(arg2, &var_88, 0x40)
    
    if (*(arg1 + 0x4260) != 0)
        arg2[5] = fconvert.s(fneg(fconvert.t(arg2[5])))
        arg2[7] = fconvert.s(fneg(fconvert.t(arg2[7])))
    
    return arg1
}
