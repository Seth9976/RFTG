// 函数名称: sub_4035e0
// 虚拟地址: 0x4035e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4035e0()
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(data_8c4d34)
    long double x87_r7 = fconvert.t(data_8c4d34)
    float* esi = data_27e7a40
    long double x87_r6_1 = x87_r7 + fconvert.t(*esi)
    esi[4] += 1
    *esi = fconvert.s(x87_r6_1)
    long double x87_r7_2 = float.t(0)
    long double x87_r6_2 = fconvert.t(fconvert.s(x87_r7 * fconvert.t(1000.0)))
    x87_r6_2 - x87_r7_2
    int32_t eax
    eax.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe | 0x3000
    bool p = unimplemented  {test ah, 0x5}
    long double x87_r7_3
    
    if (p)
        x87_r7_3 = x87_r7_2 + fconvert.t(0.5)
    else
        x87_r7_3 = x87_r7_2 - fconvert.t(0.5)
    
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(sub_685f40(x87_r7_3))
    int32_t temp0 = esi[2]
    esi[2] += eax_2
    esi[3] = adc.d(esi[3], edx, temp0 + eax_2 u< temp0)
    sub_40a050()
    void* eax_3 = data_27e7a40
    
    if (*(eax_3 + 0x19) != 1 && *(eax_3 + 0x630) == 0 && *(eax_3 + 0x638) == 0 && *(eax_3 + 0x964) == 0
            && *(eax_3 + 0x95c) == 0 && *(eax_3 + 0x9fc) == 0 && *(eax_3 + 0xa10) == 0)
        sub_405c60(eax_3 + 0x568, &data_be4c5c)
        sub_444290()
    
    float var_10 = 0f
    int32_t var_c = 0
    char eax_5 = sub_4c6230(&var_10)
    unimplemented  {call 0x4c6230}
    char ecx
    
    if (eax_5 == 0 || *(data_27e7bbc + 0x18) == 0)
        ecx = 0
    else
        ecx = 1
    
    void* edx_2 = data_27e7a40
    
    if (*(edx_2 + 0x19) == 0)
        int32_t var_54 = 0
        int32_t var_50
        __builtin_memset(&var_50, 0, 0x1c)
        
        if (ecx == 0)
            var_54 = 0
        else
            void var_34
            sub_405a60(&var_34)
            unimplemented  {fld st0, dword [0x8a53a0]}
            float var_38_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x34], st0})
            unimplemented  {fstp dword [ebp-0x34], st0}
            var_54 = 0
            
            if (sub_403a20() == 0)
                sub_446a60(&var_54)
                unimplemented  {call 0x446a60}
            
            edx_2 = data_27e7a40
        
        float var_8
        
        if ((*(data_27e7fdc + 0xc) & 1) != 0)
            var_8.b = 1
        
        if ((*(data_27e7fdc + 0xc) & 1) == 0 || *(data_27e7bbc + 0x18) == 0)
            var_8.b = 0
        
        int32_t ecx_2 = var_c
        float var_18 = var_10
        int32_t var_14_1 = ecx_2
        var_c.b = sub_403a20()
        void* eax_11
        int32_t ecx_4
        int32_t edx_4
        eax_11, ecx_4, edx_4 = sub_40b090(var_8, edx_2 + 0x56c, &var_54, &var_18, var_8.b)
        
        if (eax_11 u> 6)
            sub_4c5870("Halt", &data_83f3d3, "..\code\CClient.cpp", 0x268, "CClientUpdate")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void* edi_1
        
        switch (eax_11)
            case nullptr
                edi_1 = data_27e7a40
            case 1
                edi_1 = data_27e7a40
                eax_11.b = 0
                eax_11, ecx_4 = sub_40b000(eax_11.b, edx_4, edi_1 + 0x56c)
            case 2
                edi_1 = data_27e7a40
                eax_11.b = 0
                sub_40b000(eax_11.b, edx_4, edi_1 + 0x56c)
                eax_11, ecx_4 = sub_4169a0(edi_1 + 0x638)
                *(edi_1 + 0x638) = 1
            case 3
                eax_11.b = 0
                ecx_4 = sub_40b000(eax_11.b, edx_4, data_27e7a40 + 0x56c)
                edx_4.b = 1
                eax_11 = sub_463040(ecx_4, edx_4.b)
                unimplemented  {call 0x463040}
                edi_1 = data_27e7a40
            case 4
                edi_1 = data_27e7a40
                eax_11.b = 0
                eax_11, ecx_4 = sub_40b000(eax_11.b, edx_4, edi_1 + 0x56c)
                *(edi_1 + 0x528) = 1
            case 5
                void* edx_5 = data_27e7a40
                eax_11.b = 0
                sub_40b000(eax_11.b, edx_5, edx_5 + 0x56c)
                eax_11, ecx_4 = sub_4b5a50(edx_5 + 0x95c)
                edi_1 = data_27e7a40
            case 6
                edi_1 = data_27e7a40
                eax_11.b = 0
                sub_40b000(eax_11.b, edx_4, edi_1 + 0x56c)
                eax_11 = *(edi_1 + 0x2c495c)
                *(edi_1 + 0xa0c) = 0
                *(edi_1 + 0x9fc) = 1
                *(edi_1 + 0xa08) = eax_11
        
        ecx_4.b = var_8.b
        int32_t eax_13 = sub_417640(eax_11, &var_18, ecx_4.b, &var_18)
        
        if (eax_13 == 0)
            eax_13 = sub_417700(var_8, edi_1 + 0x638, &var_54, &var_18, var_8.b)
        
        char* ebx_1
        ebx_1.b = var_8.b
        int32_t edx_9 = sub_4b6050(&var_18, sub_4b5ad0(eax_13, data_27e7a40 + 0x95c, ebx_1.b, &var_18), 
            ebx_1.b, &var_18)
        data_27e7a40
        sub_40b8a0(0, edx_9, var_8.b, &var_18)
        data_27e7a40
        sub_415e30(0, &var_18, var_8.b, &var_18)
        eax_5 = sub_4032d0(&var_54, var_c.b)
        edx_2 = data_27e7a40
    
    int32_t* ecx_14 = *(data_27e7a4c + 0x1d0)
    
    if (ecx_14 != 0 && *ecx_14 == 5)
        eax_5 = sub_4d2570(ecx_14)
        edx_2 = data_27e7a40
    
    if (*(edx_2 + 0x528) == 0)
        return eax_5
    
    int32_t* esi_5 = *(edx_2 + 0x548) + 0x45848
    *(edx_2 + 0x528) = 0
    
    if (*esi_5 != 0)
        sub_406d90(esi_5)
        edx_2 = data_27e7a40
    
    int32_t eax_17 = *(edx_2 + 0x530)
    
    if (eax_17 == 1)
        *(edx_2 + 0x530) = 0
        sub_407670()
        struct _EXCEPTION_REGISTRATION_RECORD** eax_18 = sub_474460()
        sub_4075c0()
        return eax_18
    
    if (eax_17 != 2)
        return sub_477270()
    
    int32_t eax_21 = *(edx_2 + 0x52c) * 0x1f8
    *(edx_2 + 0x530) = 0
    var_c = *(eax_21 + edx_2 + 0xcac)
    int32_t eax_23 = sub_4c75d0(&var_c, edx_2, *(edx_2 + 0x28), 4, 0xf425e, &var_c)
    data_27c05f4 = 3
    return eax_23
}
