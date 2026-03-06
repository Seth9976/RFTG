// 函数名称: sub_4ff0a0
// 虚拟地址: 0x4ff0a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4ff0a0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t* arg5, int32_t arg6, void* arg7)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t* esi = *arg5
    int128_t* ebx = *(esi + arg3)
    
    if (arg7 == 0)
        *(esi + arg4) = arg7
        return arg5
    
    if ((arg5[0xa] & 0x100) != 0 && ebx u<= 0x100000)
        return arg5
    
    int32_t eax_2 = *(arg5[6] + 0xc)
    
    if (eax_2 != 0)
        void* eax_4 = eax_2 * arg7
        int128_t* eax_5 = sub_4cce80(eax_4)
        *(esi + arg4) = eax_5
        sub_5ab990(eax_5, ebx, eax_4)
        int128_t* var_18_2 = ebx
        int32_t var_1c_2 = arg6
        return sub_4fef50(*(esi + arg4), arg4, arg7, arg7, arg5)
    
    sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", 0x6d, 
        "DefinitionGetSize")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
