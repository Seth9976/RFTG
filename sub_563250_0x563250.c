// 函数名称: sub_563250
// 虚拟地址: 0x563250
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float* __thiscallsub_563250(void* arg1, float* arg2)
{
    // 第一条实际指令: void* edx = data_27e7fe4
    void* edx = data_27e7fe4
    
    if (*(edx + 0xdc) != 0)
        sub_4c5870("!gpRenderAppData->uiProjectedInto3D", &data_83f3d3, "Windows\WindowsDx11.cpp", 
            0x91b, "Dx11GraphicsInterface::GetUIMatrix")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    __builtin_memcpy(arg2, 0x83faf8, 0x40)
    *arg2 = fconvert.s(fconvert.t(2.0) / fconvert.t(*(arg1 + 0x20)))
    float var_48[0x10]
    float* result = &var_48
    arg2[5] = fconvert.s(fconvert.t(-2.0) / fconvert.t(*(arg1 + 0x24)))
    arg2[3] = fconvert.s(fconvert.t(-1f))
    arg2[7] = fconvert.s(float.t(1))
    sub_406020(result, arg2, edx + 0x9c)
    void var_88
    __builtin_memcpy(&var_88, &var_48, 0x40)
    __builtin_memcpy(arg2, &var_88, 0x40)
    return result
}
