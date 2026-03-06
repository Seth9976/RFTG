// 函数名称: sub_4fe550
// 虚拟地址: 0x4fe550
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_4fe550(int32_t* arg1 @ edi, int128_t* arg2)
{
    // 第一条实际指令: int128_t* result = *(arg1[6] + 0xc)
    int128_t* result = *(arg1[6] + 0xc)
    void* esi_1 = *arg1 + arg2
    arg2 = result
    
    if (result == 0)
        sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", 0x6d, 
            "DefinitionGetSize")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t i = 0
    
    if (arg1[7] s> 0)
        do
            int32_t edx
            result, edx = sub_4fe6f0(esi_1, edx, arg1)
            esi_1 += arg2
            i += 1
        while (i s< arg1[7])
    
    return result
}
