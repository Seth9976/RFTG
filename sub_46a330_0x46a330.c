// 函数名称: sub_46a330
// 虚拟地址: 0x46a330
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_46a330(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t edi = arg2
    int32_t edi = arg2
    void* eax = sub_46b2b0(edi)
    sub_5a6c10(eax + (arg1 << 2) + 0x30, eax + (arg1 << 2) + 0x34, 
        ((*(eax + 0x550) - arg1) << 2) + 0xfffffffc)
    *(eax + 0x550) -= 1
    int32_t result = *(eax + 0x550)
    *(eax + (result << 2) + 0x30) = 0
    int32_t result_1 = 0
    
    if (*(eax + 0x550) s> 0)
        void* var_8_1 = eax + 0x30
        
        while (true)
            void* eax_4 = sub_463f60(*(data_27e7a40 + 0x548) + 0x43960, *var_8_1)
            int32_t var_c_1
            
            if (edi != 0xffffffff)
                var_c_1 = *sub_46b2b0(edi)
            else
                var_c_1 = edi
            
            int32_t eax_7 = data_315fba4
            *(eax_4 + 0x78) = fconvert.s(float.t(0))
            __builtin_memcpy(eax_4 + 0x2c, eax_4 + 0xc, 0x20)
            data_315fba4 = eax_7 + 1
            *(eax_4 + 0x58) = var_c_1
            *(eax_4 + 0x5c) = 0x11
            *(eax_4 + 0x60) = eax_7
            bool cond:0_1 = *(eax_4 + 0x5c) != 1
            *(eax_4 + 0x50) = 0xffffffff
            *(eax_4 + 0x98) = 0
            *(eax_4 + 0x9c) = 0
            
            if (not(cond:0_1))
                *(eax_4 + 0x70) = 1
            
            var_8_1 += 4
            result = result_1 + 1
            result_1 = result
            
            if (result s>= *(eax + 0x550))
                break
            
            edi = arg2
    
    return result
}
