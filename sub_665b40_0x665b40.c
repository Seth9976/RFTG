// 函数名称: sub_665b40
// 虚拟地址: 0x665b40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_665b40(void* arg1)
{
    // 第一条实际指令: if (arg1 == 0 || *(arg1 + 0xfc) u>= *(arg1 + 0xec))
    if (arg1 == 0 || *(arg1 + 0xfc) u>= *(arg1 + 0xec))
        return 
    
    while (true)
        int32_t eax_1 = sub_6746d0(arg1 + 0x78, 2)
        
        if (eax_1 != 0)
            char* eax_2 = *(arg1 + 0x90)
            
            if (eax_2 == 0)
                sub_664320(arg1, "zlib error")
                noreturn
            
            sub_664320(arg1, eax_2)
            noreturn
        
        if (*(arg1 + 0x88) != eax_1)
            break
        
        sub_66fdb0(arg1, *(arg1 + 0xb0), *(arg1 + 0xb4))
    
    int32_t eax_3 = *(arg1 + 0xb4)
    int32_t ecx_2 = *(arg1 + 0x88)
    
    if (eax_3 != ecx_2)
        sub_66fdb0(arg1, *(arg1 + 0xb0), eax_3 - ecx_2)
    
    *(arg1 + 0x170) = 0
    sub_6666b0(arg1)
}
