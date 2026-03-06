// 函数名称: sub_4b4190
// 虚拟地址: 0x4b4190
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4b4190(int32_t* arg1, void* arg2 @ esi)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t* eax = sub_5a898b(arg1, U"w")
    int32_t var_1c = *(arg2 + 0x20)
    int32_t var_20 = *(arg2 + 0x1c)
    int32_t var_24 = *(arg2 + 0x18)
    sub_5a8559(eax, "%d %d %d\n")
    int32_t var_30 = *(arg2 + 0x64)
    sub_5a8559(eax, "%d\n")
    int32_t i = 0
    int32_t* var_18
    
    if (*(arg2 + 0x18) s> 0)
        do
            int32_t edx_1 = *(arg2 + 0x68)
            
            if (*(edx_1 + (i << 2)) != 0)
                int32_t var_14_1 = *(edx_1 + (i << 2))
                var_18 = &data_876b5c
                sub_5a8559(eax, "%s\n")
            else
                sub_5a8559(eax, &data_862374)
            
            i += 1
        while (i s< *(arg2 + 0x18))
    
    int32_t i_3 = 0
    
    if (*(arg2 + 0x1c) s> 0)
        int32_t eax_5 = *(arg2 + 0x18) + 1
        int32_t i_1
        
        do
            int32_t edi = 0
            
            if (eax_5 s> 0)
                do
                    var_18.q = fconvert.d(fconvert.t(*(*(*(arg2 + 0x24) + (edi << 2)) + (i_3 << 3))))
                    sub_5a8559(eax, "%.12le\n")
                    edi += 1
                    eax_5 = *(arg2 + 0x18) + 1
                while (edi s< eax_5)
            
            i_1 = i_3 + 1
            i_3 = i_1
        while (i_1 s< *(arg2 + 0x1c))
    
    int32_t i_4 = 0
    
    if (*(arg2 + 0x20) s> 0)
        int32_t eax_9 = *(arg2 + 0x1c) + 1
        int32_t i_2
        
        do
            int32_t edi_1 = 0
            
            if (eax_9 s> 0)
                do
                    var_18.q = fconvert.d(fconvert.t(*(*(*(arg2 + 0x2c) + (edi_1 << 2)) + (i_4 << 3))))
                    sub_5a8559(eax, "%.12le\n")
                    edi_1 += 1
                    eax_9 = *(arg2 + 0x1c) + 1
                while (edi_1 s< eax_9)
            
            i_2 = i_4 + 1
            i_4 = i_2
        while (i_2 s< *(arg2 + 0x20))
    
    return sub_5a8c61(eax)
}
