// 函数名称: sub_514b20
// 虚拟地址: 0x514b20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __convention("regparm")sub_514b20(void* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t edx = *(arg1 + 0x15c)
    int32_t edx = *(arg1 + 0x15c)
    
    if (edx s<= 8)
        void var_24
        
        if (edx s> 0)
            __builtin_memcpy(&var_24, arg1 + 0x14c, edx << 2)
        
        return sub_534d80(arg3, &var_24, edx, arg1 + 0x220, *(arg1 + 0x2a0), arg1 + 0x2a4, 
            *(arg1 + 0x2b4), *(arg2 + 8))
    
    sub_4c5870("results.numSamplers <= NUM_DIFFUSE", &data_83f3d3, "MaterialFnDef.cpp", 0x661, 
        "MakeMaterial")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
