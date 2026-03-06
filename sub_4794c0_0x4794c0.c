// 函数名称: sub_4794c0
// 虚拟地址: 0x4794c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4794c0(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg1 - 0xc s>= 3)
    if (arg1 - 0xc s>= 3)
        sub_4c5870("idx < 3", &data_83f3d3, "..\code\RftGVR.cpp", 0x5c6, "GetHandModels")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (arg1 - 0xc s< 0)
        sub_4c5870("idx >= 0", &data_83f3d3, "..\code\RftGVR.cpp", 0x5c7, "GetHandModels")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_2 = data_3160ee4
    
    if ((eax_2.b & 1) == 0)
        data_315fd4c = data_307c7dc
        data_315fd50 = data_307c7b4
        int32_t esi_3 = data_307c7c8
        eax_2 |= 1
        data_3160ee4 = eax_2
        data_315fd54 = esi_3
    
    if ((eax_2.b & 2) == 0)
        data_3160ee4 = eax_2 | 2
        data_315fd58 = data_307c7e0
        data_315fd5c = data_307c7b8
        data_315fd60 = data_307c7cc
    
    int32_t result = (&data_315fd4c)[arg1 - 0xc]
    int32_t ecx = (&data_315fd58)[arg1 - 0xc]
    *arg2 = result
    arg2[1] = ecx
    return result
}
