// 函数名称: sub_609b10
// 虚拟地址: 0x609b10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_609b10(int32_t arg1)
{
    // 第一条实际指令: int32_t* edi = *(arg1 + 0x134)
    int32_t* edi = *(arg1 + 0x134)
    int32_t eax = *edi
    
    if (data_bf80a4 != eax)
        if (sub_5cb370(*(arg1 + 0xbc), eax) s< 0)
            return 0xffffffff
        
        data_bf80a4 = *edi
        sub_6093c0(arg1)
    
    void* esi_1 = *(arg1 + 0x134)
    
    if (*(esi_1 + 4) != 0)
        if (*(esi_1 + 8) == 0)
            int32_t i
            
            do
                i = (*(esi_1 + 0x74))()
            while (i != 0)
        else
            int32_t eax_4 = *(esi_1 + 0xc)
            
            if (eax_4 != 0)
                if (eax_4 s> 0)
                    int32_t i_1 = 0
                    
                    do
                        int32_t var_c_3 = *(*(esi_1 + 0x10) + (i_1 << 2))
                        sub_5d0af0()
                        i_1 += 1
                    while (i_1 s< *(esi_1 + 0xc))
                
                int32_t var_c_4 = *(esi_1 + 0x10)
                sub_5d0af0()
                *(esi_1 + 0xc) = 0
                *(esi_1 + 0x10) = 0
    
    return 0
}
