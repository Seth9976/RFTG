// 函数名称: sub_568d00
// 虚拟地址: 0x568d00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_568d00(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    
    if (&esi[1] == arg2)
        return 
    
    void* var_c_1 = esi
    int32_t* edi_1 = &esi[1]
    
    do
        int32_t* ebx_1 = edi_1
        int32_t var_8 = *edi_1
        
        if (arg3(&var_8, esi) == 0)
            void* esi_1 = var_c_1
            
            if (arg3(&var_8, esi_1) != 0)
                char i
                
                do
                    *ebx_1 = *esi_1
                    ebx_1 = esi_1
                    esi_1 -= 4
                    i = arg3(&var_8, esi_1)
                while (i != 0)
            
            esi = arg1
            *ebx_1 = var_8
        else
            int32_t eax_6 = ((edi_1 - esi) s>> 2) * 4
            sub_5a6c10(edi_1 - eax_6 + 4, esi, eax_6)
            *esi = var_8
        
        var_c_1 += 4
        edi_1 = &edi_1[1]
    while (edi_1 != arg2)
}
