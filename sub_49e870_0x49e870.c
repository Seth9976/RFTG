// 函数名称: sub_49e870
// 虚拟地址: 0x49e870
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_49e870(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t i = 0
    
    if (arg1[0x116].b s> 0)
        void* eax = &arg1[0xc]
        void* var_8_1 = eax
        
        do
            if ((*(eax - 4) & 0x7f) == 0 || (*eax & 0x7f) == 0)
                if (arg1[6].b == 0)
                    char* eax_1
                    int32_t edx_1
                    eax_1, edx_1 = sub_49d9e0(arg1, i, 0x16, nullptr, nullptr, 0, nullptr, 0, 0, 0, 0)
                    
                    if (*(arg1 + 0x1ec3) != 0)
                        return 0
                    
                    sub_49e3c0(eax_1, edx_1, arg1, i, eax_1)
                else
                    sub_49cd90(arg1, 0)
            
            i += 1
            eax = var_8_1 + 0xb4
            var_8_1 = eax
        while (i s< sx.d(arg1[0x116].b))
    
    sub_49d660(arg1)
    return 1
}
