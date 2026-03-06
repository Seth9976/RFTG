// 函数名称: sub_55d230
// 虚拟地址: 0x55d230
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float* __thiscallsub_55d230(void* arg1, float* arg2)
{
    // 第一条实际指令: void* edx = data_27e7fe4
    void* edx = data_27e7fe4
    
    if (*(edx + 0xdc) != 0)
        sub_4c5870("!gpRenderAppData->uiProjectedInto3D", &data_83f3d3, "Windows\WindowsGraphics.cpp", 
            0xa66, "Dx9GraphicsInterface::GetUIMatrix")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    __builtin_memcpy(arg2, 0x83faf8, 0x40)
    *arg2 = fconvert.s(fconvert.t(2.0) / fconvert.t(*(arg1 + 0x64)))
    arg2[5] = fconvert.s(fconvert.t(-2.0) / fconvert.t(*(arg1 + 0x68)))
    *(arg1 + 0x64)
    long double x87_r6 = float.t(1)
    arg2[3] = fconvert.s(fconvert.t(-1.0) - x87_r6 / x87_r6)
    float var_48[0x10]
    float* result = &var_48
    arg2[7] = fconvert.s(x87_r6 + x87_r6 / fconvert.t(*(arg1 + 0x68)))
    sub_406020(result, arg2, edx + 0x9c)
    void var_88
    __builtin_memcpy(&var_88, &var_48, 0x40)
    __builtin_memcpy(arg2, &var_88, 0x40)
    return result
}
