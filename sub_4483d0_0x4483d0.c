// 函数名称: sub_4483d0
// 虚拟地址: 0x4483d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4483d0()
{
    // 第一条实际指令: float var_a4
    float var_a4
    int32_t eax_1 = __security_cookie ^ &var_a4
    int32_t* result = data_27e7a40
    void* esi = result[0x152]
    
    if (*(esi + 0x438e4) != 0)
        void var_50
        
        if ((*(data_27e7fdc + 0xc) & 1) == 0 || *(data_27e7bbc + 0x18) == 0)
            void* eax_2 = *(esi + 0x438e8)
            
            if (eax_2 == 0)
                sub_4d6480(data_307bef8)
                sub_4d66f0(&var_50)
                result = sub_447b40()
            else
                result = sub_448190(eax_2)
            
            *(esi + 0x438e4) = 0
        else
            float var_a0
            sub_4c6230(&var_a0)
            float var_98_1 = fconvert.s(fconvert.t(var_a0) - fconvert.t(*(esi + 0x438ec)))
            float var_9c
            var_a0 = fconvert.s(fconvert.t(var_9c) - fconvert.t(*(esi + 0x438f0)))
            void var_90
            int80_t st0_2
            st0_2, result = sub_40a930(&var_90)
            __builtin_memcpy(&var_50, result, 0x40)
            float var_44
            var_a4 = fconvert.s(fconvert.t(var_44) * fconvert.t(50.0))
            long double x87_r5_1
            long double x87_r6_3
            
            if (*(esi + 0x2c0ac) == 0xffffffff)
                x87_r6_3 = fconvert.t(var_98_1)
                x87_r5_1 = fconvert.t(var_a4)
                long double x87_r4_4 = fneg(x87_r5_1)
                x87_r4_4 - x87_r6_3
                result.w = (x87_r4_4 < x87_r6_3 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r4_4, x87_r6_3) ? 1 : 0) << 0xa
                    | (x87_r4_4 == x87_r6_3 ? 1 : 0) << 0xe | 0x2800
                
                if ((result:1.b & 0x41) == 0)
                    *(esi + 0x438e8) = 1
                    sub_5a6aba(eax_1 ^ &var_a4)
                    return result
            else
                x87_r6_3 = fconvert.t(var_a0)
                x87_r5_1 = fconvert.t(var_a4)
                long double x87_r4_2 = fneg(x87_r5_1)
                x87_r4_2 - x87_r6_3
                result.w = (x87_r4_2 < x87_r6_3 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r4_2, x87_r6_3) ? 1 : 0) << 0xa
                    | (x87_r4_2 == x87_r6_3 ? 1 : 0) << 0xe | 0x2800
                
                if ((result:1.b & 0x41) == 0)
                    *(esi + 0x438e8) = 1
                    sub_5a6aba(eax_1 ^ &var_a4)
                    return result
            
            x87_r5_1 - x87_r6_3
            result.w = (x87_r5_1 < x87_r6_3 ? 1 : 0) << 8
                | (is_unordered.t(x87_r5_1, x87_r6_3) ? 1 : 0) << 0xa
                | (x87_r5_1 == x87_r6_3 ? 1 : 0) << 0xe | 0x3800
            bool p_1 = unimplemented  {test ah, 0x5}
            
            if (not(p_1))
                *(esi + 0x438e8) = 2
                sub_5a6aba(eax_1 ^ &var_a4)
                return result
    
    sub_5a6aba(eax_1 ^ &var_a4)
    return result
}
