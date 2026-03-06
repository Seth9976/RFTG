// 函数名称: sub_530d80
// 虚拟地址: 0x530d80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_530d80(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    
    if (*arg2 s> 0)
        int32_t* ecx_1 = arg2[1]
        
        do
            if (*ecx_1 == arg1)
                sub_530a80(arg1, &data_8c35ec)
                int128_t* eax_5 = *arg2 * 8 - ecx_1 + arg2[1] - 8
                
                if (eax_5 s> 0)
                    sub_5ab990(ecx_1, &ecx_1[2], eax_5)
                
                int32_t temp0 = *arg2
                *arg2 -= 1
                
                if (temp0 == 1)
                    eax_5 = arg2[1]
                    
                    if (eax_5 != 0)
                        _aligned_free_base(eax_5)
                    
                    arg2[1] = 0
                
                eax_5.b = 1
                return eax_5
            
            i += 1
            ecx_1 = &ecx_1[2]
        while (i s< *arg2)
    
    i.b = 0
    return i
}
