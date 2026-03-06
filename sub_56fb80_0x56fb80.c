// 函数名称: sub_56fb80
// 虚拟地址: 0x56fb80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_56fb80()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t eax = sub_50c140(data_26a6760)
    int32_t eax_1 = data_26a7764
    
    if (eax_1 s<= 0)
        sub_4c5870("gFab.s.activeSetCount > 0", &data_83f3d3, "Editor\FabEditor.cpp", 0x1dc, 
            "SetDragTranslateOrigins")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t i = 0
    
    if (eax_1 s> 0)
        void* eax_3 = &data_2728bc0
        
        do
            int32_t ebx_3 = (&data_26a6764)[i] * 0xb8 + *eax
            __builtin_memcpy(eax_3 + 0x9000, ebx_3 + 8, 0x24)
            i += 1
            __builtin_memcpy(eax_3, ebx_3 + 8, 0x24)
            eax_3 += 0x24
        while (i s< data_26a7764)
    
    return sub_56f9c0()
}
