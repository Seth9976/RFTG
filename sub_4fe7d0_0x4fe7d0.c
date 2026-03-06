// 函数名称: sub_4fe7d0
// 虚拟地址: 0x4fe7d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_4fe7d0(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    int32_t eax = *(arg2 + 0xc)
    
    if (eax == 0)
        sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", 0x6d, 
            "DefinitionGetSize")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int128_t* result = sub_5abfc0(arg1, 0, eax)
    int32_t esi = *(arg2 + 8)
    int32_t esi_1 = neg.d(esi)
    int32_t i = neg.d(sbb.d(esi_1, esi_1, esi != 0)) - 1
    
    while (i != 0xffffffff)
        int32_t eax_4 = i * 0xf
        i += 1
        int32_t* eax_5 = *(arg2 + 4) + (eax_4 << 2)
        
        if (i s>= *(arg2 + 8))
            i = 0xffffffff
        
        void* edx_1 = eax_5[3]
        result = sub_4fe5c0(eax_5, edx_1, arg1, edx_1)
    
    return result
}
