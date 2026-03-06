// 函数名称: sub_54c2d0
// 虚拟地址: 0x54c2d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_54c2d0(int32_t arg1 @ esi)
{
    // 第一条实际指令: void* edx = data_be1f10
    void* edx = data_be1f10
    void* eax = nullptr
    void* ecx_1 = data_be1f14 * 0xf88 + edx
    
    while (true)
        if (eax != 0)
            eax += 0xf88
        else
            eax = edx
        
        if (eax u>= ecx_1)
            break
        
        while (true)
            if ((*(eax + 0xf84) & 0xffff0000) != 0)
                if (*eax != arg1)
                    break
                
                return *(eax + 0xf84)
            
            eax += 0xf88
            
            if (eax u>= ecx_1)
                goto label_54c312
    
    label_54c312:
    int128_t* eax_1 = sub_54c3b0()
    *eax_1 = arg1
    return *(eax_1 + 0xf84)
}
