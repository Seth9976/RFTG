// 函数名称: sub_545ce0
// 虚拟地址: 0x545ce0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_545ce0(void* arg1, uint32_t arg2)
{
    // 第一条实际指令: int32_t* eax = sub_54b850(arg1 + 0x4240, arg2)
    int32_t* eax = sub_54b850(arg1 + 0x4240, arg2)
    
    if (*(arg1 + 0x5030) == 0)
        bool cond:1_1 = eax[0x39] == 0
        arg2 = *eax
        
        if (not(cond:1_1))
            data_307989c(1, &eax[0x39])
        
        if (eax[0x38] != 0)
            data_3079898(1, &eax[0x38])
        
        if (arg2 != 0)
            glDeleteTextures(1, &arg2)
        
        int32_t* eax_5 = data_307882c + 0x415c
        int32_t i_1 = 8
        int32_t i
        
        do
            if (eax_5[-0x30] == arg2)
                eax_5[-0x30] = 0xffffffff
            
            if (*eax_5 == arg2)
                *eax_5 = 0xffffffff
            
            eax_5 = &eax_5[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t result = *(arg1 + 0x424c)
    *(arg1 + 0x424c) = zx.d(eax[0x52].w)
    eax[0x52] = result
    *(arg1 + 0x4250) -= 1
    return result
}
