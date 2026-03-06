// 函数名称: sub_579db0
// 虚拟地址: 0x579db0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_579db0(int32_t arg1)
{
    // 第一条实际指令: int32_t* eax = sub_4f4890(data_273ac20)
    int32_t* eax = sub_4f4890(data_273ac20)
    int32_t ecx = eax[1]
    int32_t eax_1 = 0
    
    if (ecx s> 0)
        int32_t* edx_1 = *eax
        
        do
            if (*edx_1 == arg1)
                int32_t var_10 = 0
                int32_t* eax_4
                int32_t ecx_2
                eax_4, ecx_2 = sub_4fff30(data_30d7440, 0)
                return sub_505290(eax, eax_4, ecx_2, eax_1)
            
            eax_1 += 1
            edx_1 = &edx_1[0x46]
        while (eax_1 s< ecx)
    
    sub_4c5870("Halt", &data_83f3d3, "Editor\UIEditor.cpp", 0x57e, "DeleteElement")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
