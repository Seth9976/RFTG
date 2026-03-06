// 函数名称: sub_6359d0
// 虚拟地址: 0x6359d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6359d0(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, uint8_t arg5, char arg6, char arg7, char arg8)
{
    // 第一条实际指令: void* esi = arg1[1]
    void* esi = arg1[1]
    int32_t edi = 0xff - zx.d(arg8)
    uint32_t ecx_1 = zx.d(*(esi + 9))
    
    if (ecx_1 == 2)
        if (arg4 == 1)
            int32_t edx_93 = arg1[4] * arg3 + arg1[5]
            uint32_t ebx_7 = zx.d(*(edx_93 + (arg2 << 1)))
            int32_t eax_91
            int32_t edx_97
            edx_97:eax_91 = mulu.dp.d(0x80808081, 
                zx.d(*
                    (((*(esi + 0x14) & ebx_7) u>> *(esi + 0x22)) + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                    * edi)
            int32_t eax_98
            int32_t edx_102
            edx_102:eax_98 = mulu.dp.d(0x80808081, 
                zx.d(*
                    (((*(esi + 0x10) & ebx_7) u>> *(esi + 0x21)) + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                    * edi)
            uint16_t eax_100 = (((edx_97 u>> 7) + zx.d(arg7)) u>> *(esi + 0x1e)).w << *(esi + 0x22)
                | (((edx_102 u>> 7) + zx.d(arg6)) u>> *(esi + 0x1d)).w << *(esi + 0x21)
            char ebx_8 = *(esi + 0x20)
            int32_t eax_103
            int32_t edx_109
            edx_109:eax_103 = mulu.dp.d(0x80808081, 
                zx.d(*(((*(esi + 0xc) & ebx_7) u>> ebx_8) + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * edi)
            *(edx_93 + (arg2 << 1)) =
                eax_100 | (((edx_109 u>> 7) + zx.d(arg5)) u>> *(esi + 0x1c)).w << ebx_8 | *(esi + 0x18)
            return 0
        
        if (arg4 != 2)
            if (arg4 == 4)
                int16_t* ebx_5 = arg1[4] * arg3 + arg1[5] + (arg2 << 1)
                uint32_t edi_18 = zx.d(*ebx_5)
                int32_t eax_64
                int32_t edx_68
                edx_68:eax_64 = mulu.dp.d(0x80808081, 
                    zx.d(*(((*(esi + 0xc) & edi_18) u>> *(esi + 0x20))
                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * zx.d(arg5))
                int32_t eax_69
                int32_t edx_74
                edx_74:eax_69 = mulu.dp.d(0x80808081, 
                    zx.d(*(((*(esi + 0x14) & edi_18) u>> *(esi + 0x22))
                        + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * zx.d(arg7))
                char edi_19 = *(esi + 0x21)
                int32_t eax_73
                int32_t edx_81
                edx_81:eax_73 = mulu.dp.d(0x80808081, 
                    zx.d(*(((*(esi + 0x10) & edi_18) u>> edi_19) + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                        * zx.d(arg6))
                uint16_t eax_74 = (edx_68 u>> 7 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                    | (edx_74 u>> 7 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                    | (edx_81 u>> 7 u>> *(esi + 0x1d)).w << edi_19
                *ebx_5 = eax_74 | *(esi + 0x18)
                return 0
            
            int32_t ebx
            ebx.b = arg6
            ebx.b u>>= *(esi + 0x1d)
            uint16_t edi_16 = zx.w(ebx.b)
            ebx.b = arg7
            ebx.b u>>= *(esi + 0x1e)
            uint16_t edx_62 = zx.w(arg5 u>> *(esi + 0x1c)) << *(esi + 0x20) | edi_16 << *(esi + 0x21)
                | zx.w(ebx.b) << *(esi + 0x22) | *(esi + 0x18)
            *(arg1[4] * arg3 + arg1[5] + (arg2 << 1)) = edx_62
            return 0
        
        int16_t* ebx_6 = arg1[4] * arg3 + arg1[5] + (arg2 << 1)
        uint32_t edx_85 = zx.d(*ebx_6)
        arg8.d = (*(esi + 0x14) & edx_85) u>> *(esi + 0x22)
        uint32_t edx_89 =
            zx.d(*(((*(esi + 0xc) & edx_85) u>> *(esi + 0x20)) + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
            + zx.d(arg5)
        
        if (edx_89 u> 0xff)
            edx_89 = 0xff
        
        uint32_t edi_24 =
            zx.d(*(((*(esi + 0x10) & edx_85) u>> *(esi + 0x21)) + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
            + zx.d(arg6)
        
        if (edi_24 u> 0xff)
            edi_24 = 0xff
        
        uint32_t eax_84 = zx.d(*(arg8.d + (&data_8bac68)[zx.d(*(esi + 0x1e))])) + zx.d(arg7)
        
        if (eax_84 u> 0xff)
            eax_84 = 0xff
        
        uint16_t eax_85 = (eax_84 u>> *(esi + 0x1e)).w << *(esi + 0x22)
            | (edi_24 u>> *(esi + 0x1d)).w << *(esi + 0x21)
            | (edx_89 u>> *(esi + 0x1c)).w << *(esi + 0x20)
        *ebx_6 = eax_85 | *(esi + 0x18)
        return 0
    
    if (ecx_1 != 4)
        sub_5cd050(4)
        return 0xffffffff
    
    if (arg4 == 1)
        int32_t edx_40 = arg1[4] * arg3 + arg1[5]
        int32_t ebx_3 = *(edx_40 + (arg2 << 2))
        int32_t eax_40
        int32_t edx_44
        edx_44:eax_40 = mulu.dp.d(0x80808081, 
            zx.d(*(((*(esi + 0x14) & ebx_3) u>> *(esi + 0x22)) + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                * edi)
        arg8.d = ((edx_44 u>> 7) + zx.d(arg7)) u>> *(esi + 0x1e) << *(esi + 0x22)
        int32_t eax_48
        int32_t edx_49
        edx_49:eax_48 = mulu.dp.d(0x80808081, 
            zx.d(*(((*(esi + 0x10) & ebx_3) u>> *(esi + 0x21)) + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                * edi)
        char ebx_4 = *(esi + 0x20)
        arg8.d |= ((edx_49 u>> 7) + zx.d(arg6)) u>> *(esi + 0x1d) << *(esi + 0x21)
        int32_t eax_54
        int32_t edx_57
        edx_57:eax_54 = mulu.dp.d(0x80808081, 
            zx.d(*(((*(esi + 0xc) & ebx_3) u>> ebx_4) + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * edi)
        *(edx_40 + (arg2 << 2)) =
            arg8.d | ((edx_57 u>> 7) + zx.d(arg5)) u>> *(esi + 0x1c) << ebx_4 | *(esi + 0x18)
        return 0
    
    if (arg4 != 2)
        if (arg4 == 4)
            int32_t* ebx_1 = arg1[4] * arg3 + arg1[5] + (arg2 << 2)
            int32_t edi_7 = *ebx_1
            int32_t eax_5
            int32_t edx_12
            edx_12:eax_5 = mulu.dp.d(0x80808081, 
                zx.d(*
                    (((*(esi + 0x14) & edi_7) u>> *(esi + 0x22)) + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                    * zx.d(arg7))
            arg8.d = edx_12 u>> 7 u>> *(esi + 0x1e) << *(esi + 0x22)
            int32_t eax_11
            int32_t edx_18
            edx_18:eax_11 = mulu.dp.d(0x80808081, 
                zx.d(*
                    (((*(esi + 0x10) & edi_7) u>> *(esi + 0x21)) + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                    * zx.d(arg6))
            char edi_8 = *(esi + 0x20)
            arg8.d |= edx_18 u>> 7 u>> *(esi + 0x1d) << *(esi + 0x21)
            int32_t eax_16
            int32_t edx_26
            edx_26:eax_16 = mulu.dp.d(0x80808081, 
                zx.d(*(((*(esi + 0xc) & edi_7) u>> edi_8) + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                    * zx.d(arg5))
            *ebx_1 = arg8.d | edx_26 u>> 7 u>> *(esi + 0x1c) << edi_8 | *(esi + 0x18)
            return 0
        
        uint32_t edx_5 = zx.d(arg5) u>> *(esi + 0x1c) << *(esi + 0x20)
            | zx.d(arg6) u>> *(esi + 0x1d) << *(esi + 0x21)
            | zx.d(arg7) u>> *(esi + 0x1e) << *(esi + 0x22)
        *(arg1[4] * arg3 + arg1[5] + (arg2 << 2)) = edx_5 | *(esi + 0x18)
        return 0
    
    int32_t* ebx_2 = arg1[4] * arg3 + arg1[5] + (arg2 << 2)
    int32_t edx_31 = *ebx_2
    arg8.d = (*(esi + 0x14) & edx_31) u>> *(esi + 0x22)
    uint32_t edx_35 =
        zx.d(*(((*(esi + 0xc) & edx_31) u>> *(esi + 0x20)) + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
        + zx.d(arg5)
    
    if (edx_35 u> 0xff)
        edx_35 = 0xff
    
    uint32_t edi_13 =
        zx.d(*(((*(esi + 0x10) & edx_31) u>> *(esi + 0x21)) + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
        + zx.d(arg6)
    
    if (edi_13 u> 0xff)
        edi_13 = 0xff
    
    uint32_t eax_29 = zx.d(*(arg8.d + (&data_8bac68)[zx.d(*(esi + 0x1e))])) + zx.d(arg7)
    
    if (eax_29 u> 0xff)
        eax_29 = 0xff
    
    uint32_t eax_33 = eax_29 u>> *(esi + 0x1e) << *(esi + 0x22)
        | edi_13 u>> *(esi + 0x1d) << *(esi + 0x21) | edx_35 u>> *(esi + 0x1c) << *(esi + 0x20)
    *ebx_2 = eax_33 | *(esi + 0x18)
    return 0
}
