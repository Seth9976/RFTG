// 函数名称: sub_404bb0
// 虚拟地址: 0x404bb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_404bb0(int32_t* arg1 @ edi)
{
    // 第一条实际指令: void var_48
    void var_48
    int32_t eax_1 = __security_cookie ^ &var_48
    int32_t var_40[0x7]
    sub_405a60(&var_40)
    float var_24 = fconvert.s(fconvert.t(100000f))
    int16_t top = 0
    var_40[0] = 0
    
    if (sub_403a20() == 0)
        sub_446a60(&var_40)
        top = 0xffff
    
    sub_4032d0(&var_40, sub_403a20())
    int32_t ecx = *arg1
    char edx_1
    
    if (ecx != 0xd || arg1[1] != 4)
        edx_1 = 0
    else
        edx_1 = 1
    
    char eax_4
    
    if (ecx != 0xc || arg1[1] != 0x2000)
        eax_4 = 0
    else
        eax_4 = 1
    
    int32_t ebx
    ebx.b = eax_4 | edx_1
    
    if (ecx != 1)
    label_404c6f:
        
        if ((ecx != 0 || arg1[1] != 0x1b) && (ecx != 0xc || arg1[1] != 0x20)
                && (ecx != 0x11 || arg1[1] != 0x200000) && (ecx != 0xd || arg1[1] != 2) && ebx.b == 0
                && (ecx != 0x19 || arg1[1] != 0x200000))
            goto label_404cc4
        
        void* eax_15 = sub_46b2b0(*(data_27e7a40 + 0x74))
        void* eax_16 = data_27e7a40
        void* ecx_22 = *(eax_16 + 0x548)
        
        if (*(eax_16 + 0x630) == 1)
            sub_4d6480(data_307bf0c)
            sub_40b000(0, sub_4d66f0(&var_40), data_27e7a40 + 0x56c)
            void* eax_18
            eax_18.b = 1
            sub_5a6aba(eax_1 ^ &var_48)
            return eax_18
        
        if (*(eax_16 + 0x638) == 1)
            sub_4d6480(data_307bf0c)
            sub_4d66f0(&var_40)
            *(data_27e7a40 + 0x638) = 0
            int32_t eax_19
            eax_19.b = 1
            sub_5a6aba(eax_1 ^ &var_48)
            return eax_19
        
        if (*(eax_16 + 0x9fc) == 1)
            data_307bf0c
            sub_4d6980()
            *(data_27e7a40 + 0x9fc) = 0
            void* eax_20
            eax_20.b = 1
            sub_5a6aba(eax_1 ^ &var_48)
            return eax_20
        
        if (*(eax_16 + 0xa10) == 1)
            data_307bf0c
            sub_4d6980()
            sub_416710(data_27e7a40 + 0xa10)
            int128_t* eax_21
            eax_21.b = 1
            sub_5a6aba(eax_1 ^ &var_48)
            return eax_21
        
        if (*(eax_16 + 0x964) == 1)
            data_307bf0c
            sub_4d6980()
            *(data_27e7a40 + 0x964) = 0
            int32_t eax_22
            eax_22.b = 1
            sub_5a6aba(eax_1 ^ &var_48)
            return eax_22
        
        if (*(eax_16 + 0x95c) != 1)
            if (*(ecx_22 + 0x2c07a) != 0)
                data_307bf0c
                sub_4d6980()
                sub_463150()
                unimplemented  {call 0x463150}
                int32_t eax_23
                eax_23.b = 1
                sub_5a6aba(eax_1 ^ &var_48)
                return eax_23
            
            if (*(ecx_22 + 0x2c079) != 0)
                data_307bf0c
                sub_4d6980()
                *(*(data_27e7a40 + 0x548) + 0x2c079) = 0
                void* eax_24
                eax_24.b = 1
                sub_5a6aba(eax_1 ^ &var_48)
                return eax_24
            
            if (*(eax_15 + 0x1c) == 0x18 && *(eax_15 + 0x1f90) == 0)
                data_307bf0c
                sub_4d6980()
                void* ecx_51 = data_27e7a40
                *(eax_15 + 0x1f90) = 1
                void* esi_6 = *(ecx_51 + 0x548)
                
                if (*(esi_6 + 0x2c078) == 1 && *(esi_6 + 0x210) == 0)
                    sub_4d6480(data_307bef0)
                    sub_4d66f0(&var_40)
                
                *(esi_6 + 0x210) = 5
                *(esi_6 + 0x2c078) = 0
                *(esi_6 + 0x214) = 0
                int32_t eax_25
                eax_25.b = 1
                sub_5a6aba(eax_1 ^ &var_48)
                return eax_25
            
            if (*(ecx_22 + 0xbfac) != 0 || *(ecx_22 + 0x2c0ac) != 0xffffffff)
                sub_447b40()
            else if (ebx.b == 0)
                data_307bf0c
                sub_40b000(1, sub_4d6980(), data_27e7a40 + 0x56c)
                void* eax_27
                eax_27.b = 1
                sub_5a6aba(eax_1 ^ &var_48)
                return eax_27
        else
            data_307bf0c
            sub_4d6980()
            eax_16 = data_27e7a40
            bool cond:1_1 = *(eax_16 + 0x9f0) s<= 1
            *(eax_16 + 0x95c) = 0
            
            if (not(cond:1_1))
                *(eax_16 + 0x964) = 1
                eax_16.b = 1
                sub_5a6aba(eax_1 ^ &var_48)
                return eax_16
        
        eax_16.b = 1
        sub_5a6aba(eax_1 ^ &var_48)
        return eax_16
    
    int32_t eax_5 = arg1[1]
    
    if (eax_5 != 0x25 && eax_5 != 0x26)
        if (eax_5 == 0x27 || eax_5 == 0x28)
            sub_448190(1)
            goto label_404cc4
        
        goto label_404c6f
    
    sub_448190(2)
    label_404cc4:
    int32_t eax_6 = *arg1
    edx_1 = 0
    
    if (eax_6 == 3)
        edx_1 = 1
    
    void* esi_1 = data_27e7fcc
    void* ecx_1 = data_27e7a40
    
    if (eax_6 == 4 && *(ecx_1 + 0xacc) != 0)
        *(ecx_1 + 0xacc) = 0
        unimplemented  {fld st0, dword [esi+0x50]}
        unimplemented  {fsub st0, dword [ecx+0xac8]}
        float var_44_1 = fconvert.s(unimplemented  {fstp dword [esp+0xc], st0})
        unimplemented  {fstp dword [esp+0xc], st0}
        unimplemented  {fld st0, dword [esp+0xc]}
        long double temp0_1 = fconvert.t(0.300000012f)
        unimplemented  {fcomp st0, dword [0x846ec0]} f- temp0_1
        bool c0_1 = unimplemented  {fcomp st0, dword [0x846ec0]} f< temp0_1
        bool c2_1 = is_unordered.t(unimplemented  {fcomp st0, dword [0x846ec0]}, temp0_1)
        bool c3_1 = unimplemented  {fcomp st0, dword [0x846ec0]} f== temp0_1
        unimplemented  {fcomp st0, dword [0x846ec0]}
        eax_6.w = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe | (top & 7) << 0xb
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (not(p_1))
            edx_1 = 1
    
    if (*(ecx_1 + 0x630) == 0)
        int32_t eax_7 = *arg1
        
        if ((eax_7 == 0 && arg1[1] == 0x20) || (eax_7 == 0xc && arg1[1] == 0x1000)
            || (eax_7 == 0x11 && arg1[1] == 0x100000))
        label_404d2b:
            void* eax_8 = sub_448660(ecx_1 + 0x78, nullptr)
            sub_5a6aba(eax_1 ^ &var_48)
            return eax_8
        
        if (eax_7 == 0xd && arg1[1] == 0x10)
            goto label_404d2b
    
    void* eax_12 = *arg1
    
    if ((eax_12 == 0x11 && arg1[1] == 0x10000) || (eax_12 == 0xc && arg1[1] == 0x8000))
    label_404d81:
        void* eax_9 = sub_448660(ecx_1 + 0x78, 1)
        sub_5a6aba(eax_1 ^ &var_48)
        return eax_9
    
    if (eax_12 == 0xd && arg1[1] == 8)
        goto label_404d81
    
    if (eax_12 == 7)
        sub_448660(ecx_1 + 0x78, 1)
        void* eax_10
        eax_10.b = 1
        sub_5a6aba(eax_1 ^ &var_48)
        return eax_10
    
    if (edx_1 != 0)
        sub_448660(ecx_1 + 0x78, nullptr)
        void* eax_11
        eax_11.b = 1
        sub_5a6aba(eax_1 ^ &var_48)
        return eax_11
    
    if (*(esi_1 + 0x40) != 0)
        if (eax_12 == 0)
            eax_12 = arg1[1]
            
            if (eax_12 == 0xd)
                void* eax_13 = sub_462ce0(ecx_1)
                sub_5a6aba(eax_1 ^ &var_48)
                return eax_13
            
            if (eax_12 == 0x68)
                sub_463170(1)
                ecx_1 = data_27e7a40
            else if (eax_12 == 0x48)
                int32_t eax_14 = 0xffffffff
                
                if ((arg1[2].b & 4) != 0)
                    eax_14 = 0xfffffff6
                
                sub_463170(eax_14)
                ecx_1 = data_27e7a40
        
        if (*arg1 == 1)
            if (arg1[1] == 0x5a && (arg1[2].b & 2) != 0)
                sub_463700()
                ecx_1 = data_27e7a40
            
            if (*arg1 == 1 && arg1[1] == 0x59 && (arg1[2].b & 2) != 0)
                sub_4636a0()
                ecx_1 = data_27e7a40
        
        if (*arg1 == 0)
            if (arg1[1] == 0x73)
                sub_463000()
                ecx_1 = data_27e7a40
            
            if (*arg1 == 0)
                if (arg1[1] == 0x6c)
                    sub_463150()
                    unimplemented  {call 0x463150}
                    ecx_1 = data_27e7a40
                
                if (*arg1 == 0)
                    if (arg1[1] == 0x72)
                        *(ecx_1 + 0x528) = 1
                    
                    if (*arg1 == 0)
                        eax_12 = arg1[1]
                        
                        if (eax_12 == 0x62 && arg1[2] == 0)
                            eax_12.b = data_27c05f2 == 0
                            data_27c05f2 = eax_12.b
                            eax_12.b = 1
                            sub_5a6aba(eax_1 ^ &var_48)
                            return eax_12
                        
                        if (eax_12 == 0x6c && arg1[2] == 0)
                            eax_12.b = 1
                            ecx_1.b = data_27c05f3 == 0
                            data_27c05f3 = ecx_1.b
                            sub_5a6aba(eax_1 ^ &var_48)
                            return eax_12
    
    eax_12.b = 0
    sub_5a6aba(eax_1 ^ &var_48)
    return eax_12
}
