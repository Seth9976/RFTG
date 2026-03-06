// 函数名称: sub_4b1ae0
// 虚拟地址: 0x4b1ae0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4b1ae0(int32_t arg1, void* arg2, int32_t arg3, int32_t arg4, char arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* esi = arg2
    void* ecx_1 = esi + arg4 * 0x14 + 0x464
    void* eax_4 = *(ecx_1 + 8)
    int32_t edi = 0
    bool cond:0 = *(eax_4 + 0x90) s<= 0
    void* var_38 = esi
    int32_t var_24 = 0
    void* var_34 = ecx_1
    int32_t var_28 = 0
    void* var_40
    
    if (not(cond:0))
        int32_t var_24_1 = 0xffffffff
        int32_t var_2c_1 = 0
        int32_t ecx_14
        int32_t edx_6
        
        do
            int32_t ecx_2 = *(var_2c_1 + eax_4 + 0xa0)
            int32_t eax_5 = *(var_2c_1 + eax_4 + 0xa4)
            
            if (ecx_2 == 0x1d && eax_5 == 0)
                int32_t eax_6
                int32_t edx_1
                edx_1:eax_6 = muls.dp.d(0x55555556, sx.d(*(arg3 * 0xb4 + esi + 0xa6)))
                edi += (edx_1 u>> 0x1f) + edx_1
            else if (ecx_2 == 0x1a && eax_5 == 0)
                edi += sub_4b1530(eax_5, arg3, esi, arg3)
            else if (ecx_2 == 0x1b && eax_5 == 0)
                edi -= sub_4b1530(arg3, var_2c_1, esi, arg3)
            else if (ecx_2 == 0x1f && eax_5 == 0)
                edi += sx.d(*(arg3 * 0xb4 + esi + 0xa3))
            else if (ecx_2 == 0x1e && eax_5 == 0)
                int32_t var_20 = eax_5
                int32_t var_1c_1 = eax_5
                
                for (int32_t i = sx.d(*(arg3 * 0xb4 + esi + 0x46)); i != 0xffffffff; 
                        i = sx.d(*(esi + ((i * 5 + 0x11d) << 2))))
                    var_40 = esi + i * 0x14 + 0x464
                    void* ecx_11 = *(esi + i * 0x14 + 0x46c)
                    
                    if (*(ecx_11 + 6) != 2)
                        ecx_11.b = *(ecx_11 + 0xe)
                        
                        if (ecx_11.b != 1)
                            (&var_20)[sx.d(ecx_11.b)] = 1
                        else
                            (&var_20)[sx.d(*(esi + 0x1eb4))] = 1
                
                if (eax_5 != 0)
                    var_24_1 += 1
                
                if (eax_5 != 0)
                    var_24_1 += 1
                
                if (eax_5 != 0)
                    var_24_1 += 1
                
                if (eax_5 != 0)
                    var_24_1 += 1
                
                switch (var_24_1)
                    case 0
                        edi += 1
                    case 1
                        edi += 3
                    case 2
                        edi += 6
                    case 3
                        edi += 0xa
            
            eax_4 = *(var_34 + 8)
            edx_6 = sx.d(*(eax_4 + 0x90))
            var_2c_1 += 0x18
            ecx_14 = var_28 + 1
            var_28 = ecx_14
        while (ecx_14 s< edx_6)
        ecx_1 = var_34
        var_24 = edi
    
    int32_t i_1 = sx.d(*(arg3 * 0xb4 + esi + 0x46))
    
    if (i_1 != 0xffffffff)
        void* eax_12 = *(ecx_1 + 8)
        int32_t ecx_15 = sx.d(*(eax_12 + 0x90))
        void* var_3c_1 = eax_12
        
        do
            int32_t edi_1 = 0
            var_40 = esi + i_1 * 0x14 + 0x464
            
            if (ecx_15 s> 0)
                int32_t* ecx_17 = *(esi + i_1 * 0x14 + 0x46c)
                void* esi_1 = eax_12 + 0x98
                
                do
                    var_28 = 1
                    
                    if (sub_4b1730(ecx_17, &var_28, esi_1, var_38, var_40) != 0)
                        var_24 += sx.d(*esi_1)
                        
                        if (var_28 != 0)
                            break
                    
                    edi_1 += 1
                    esi_1 += 0x18
                while (edi_1 s< ecx_15)
                
                esi = var_38
                eax_12 = var_3c_1
            
            i_1 = sx.d(*(esi + ((i_1 * 5 + 0x11d) << 2)))
        while (i_1 != 0xffffffff)
        
        edi = var_24
        ecx_1 = var_34
    
    if (arg5 == 0 || *(ecx_1 + 1) == 3)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return edi
    
    void* eax_16 = *(ecx_1 + 8)
    ecx_1.b = *(eax_16 + 0x90)
    
    if (ecx_1.b s> 0)
        if (*(eax_16 + 0xa0) == 0x1a && *(eax_16 + 0xa4) == 0)
            var_24 = edi + 2
        else if (ecx_1.b s> 0 && *(eax_16 + 0xa0) == 0x1b && *(eax_16 + 0xa4) == 0)
            var_24 = edi + 2
    
    int32_t edi_3 = 0
    
    if (ecx_1.b s> 0)
        int32_t* eax_18 = *(var_34 + 8)
        int32_t* var_3c_2 = eax_18
        void* esi_2 = &eax_18[0x26]
        
        while (true)
            var_28 = 1
            
            if (sub_4b1730(eax_18, &var_28, esi_2, var_38, var_40) != 0)
                var_24 += sx.d(*esi_2)
                
                if (var_28 != 0)
                    break
            
            edi_3 += 1
            esi_2 += 0x18
            
            if (edi_3 s>= sx.d(ecx_1.b))
                break
            
            eax_18 = var_3c_2
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return var_24
}
