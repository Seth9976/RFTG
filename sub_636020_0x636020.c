// 函数名称: sub_636020
// 虚拟地址: 0x636020
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_636020(uint32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, char arg5, char arg6, char arg7, char arg8)
{
    // 第一条实际指令: uint32_t edx = zx.d(arg8)
    uint32_t edx = zx.d(arg8)
    void* esi = *(arg1 + 4)
    
    if (*(esi + 9) != 4)
        sub_5cd050(4)
        return 0xffffffff
    
    if (arg4 == 1)
        int32_t* eax_32 = *(arg1 + 0x10) * arg3 + *(arg1 + 0x14) + (arg2 << 2)
        int32_t edi_17 = *eax_32
        uint32_t edx_51 = zx.d(*(esi + 0x1f))
        int32_t eax_35
        int32_t edx_55
        edx_55:eax_35 = mulu.dp.d(0x80808081, 
            zx.d(*(((*(esi + 0x10) & edi_17) u>> *(esi + 0x21)) + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                * (0xff - edx))
        arg8.d = ((edx_55 u>> 7) + zx.d(arg6)) u>> *(esi + 0x1d) << *(esi + 0x21)
        int32_t eax_43
        int32_t edx_60
        edx_60:eax_43 = mulu.dp.d(0x80808081, 
            zx.d(*(((*(esi + 0xc) & edi_17) u>> *(esi + 0x20)) + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                * (0xff - edx))
        arg8.d |= ((edx_60 u>> 7) + zx.d(arg5)) u>> *(esi + 0x1c) << *(esi + 0x20)
        int32_t eax_49
        int32_t edx_68
        edx_68:eax_49 = mulu.dp.d(0x80808081, 
            zx.d(*(((*(esi + 0x14) & edi_17) u>> *(esi + 0x22)) + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                * (0xff - edx))
        arg8.d |= ((edx_68 u>> 7) + zx.d(arg7)) u>> *(esi + 0x1e) << *(esi + 0x22)
        char eax_53 = *(esi + 0x23)
        *eax_32 = arg8.d | zx.d(*(((*(esi + 0x18) & edi_17) u>> eax_53) + (&data_8bac68)[edx_51]))
            u>> edx_51.b << eax_53
        return 0
    
    if (arg4 != 2)
        if (arg4 == 4)
            int32_t* ebx_7 = *(arg1 + 0x10) * arg3 + *(arg1 + 0x14) + (arg2 << 2)
            int32_t edi_6 = *ebx_7
            uint32_t edx_6 = zx.d(*(esi + 0x1f))
            int32_t eax_4
            int32_t edx_11
            edx_11:eax_4 = mulu.dp.d(0x80808081, 
                zx.d(*
                    (((*(esi + 0x14) & edi_6) u>> *(esi + 0x22)) + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                    * zx.d(arg7))
            arg8.d = edx_11 u>> 7 u>> *(esi + 0x1e) << *(esi + 0x22)
            int32_t eax_10
            int32_t edx_17
            edx_17:eax_10 = mulu.dp.d(0x80808081, 
                zx.d(*
                    (((*(esi + 0x10) & edi_6) u>> *(esi + 0x21)) + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                    * zx.d(arg6))
            arg8.d |= edx_17 u>> 7 u>> *(esi + 0x1d) << *(esi + 0x21)
            int32_t eax_15
            int32_t edx_25
            edx_25:eax_15 = mulu.dp.d(0x80808081, 
                zx.d(
                    *(((*(esi + 0xc) & edi_6) u>> *(esi + 0x20)) + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                    * zx.d(arg5))
            arg8.d |= edx_25 u>> 7 u>> *(esi + 0x1c) << *(esi + 0x20)
            char eax_18 = *(esi + 0x23)
            *ebx_7 = arg8.d | zx.d(*(((*(esi + 0x18) & edi_6) u>> eax_18) + (&data_8bac68)[edx_6]))
                u>> edx_6.b << eax_18
            return 0
        
        uint32_t edi_4 = zx.d(arg5) u>> *(esi + 0x1c) << *(esi + 0x20)
            | zx.d(arg6) u>> *(esi + 0x1d) << *(esi + 0x21)
            | zx.d(arg7) u>> *(esi + 0x1e) << *(esi + 0x22)
        *(*(arg1 + 0x10) * arg3 + *(arg1 + 0x14) + (arg2 << 2)) =
            edi_4 | edx u>> *(esi + 0x1f) << *(esi + 0x23)
        return 0
    
    int32_t* eax_22 = *(arg1 + 0x10) * arg3 + *(arg1 + 0x14) + (arg2 << 2)
    char ecx_39 = *(esi + 0x21)
    uint32_t edx_36 = zx.d(*(esi + 0x1d))
    int32_t eax_23 = *eax_22
    uint32_t edx_37 = zx.d(*(esi + 0x1e))
    char ecx_41 = *(esi + 0x22)
    char ecx_42 = *(esi + 0x23)
    arg8.d = zx.d(*(esi + 0x1f))
    char ecx_45 = *(esi + 0x20)
    uint32_t ecx_46 = zx.d(*(esi + 0x1c))
    uint32_t eax_27 =
        zx.d(*(((*(esi + 0xc) & eax_23) u>> ecx_45) + (&data_8bac68)[ecx_46])) + zx.d(arg5)
    
    if (eax_27 u> 0xff)
        eax_27 = 0xff
    
    uint32_t ebx_9 =
        zx.d(*(((*(esi + 0x10) & eax_23) u>> ecx_39) + (&data_8bac68)[edx_36])) + zx.d(arg6)
    
    if (ebx_9 u> 0xff)
        ebx_9 = 0xff
    
    uint32_t edi_14 =
        zx.d(*(((*(esi + 0x14) & eax_23) u>> ecx_41) + (&data_8bac68)[edx_37])) + zx.d(arg7)
    
    if (edi_14 u> 0xff)
        edi_14 = 0xff
    
    uint32_t edx_47 =
        zx.d(*(((*(esi + 0x18) & eax_23) u>> ecx_42) + (&data_8bac68)[arg8.d])) u>> arg8 << ecx_42
        | edi_14 u>> edx_37.b << ecx_41 | ebx_9 u>> edx_36.b << ecx_39
    *eax_22 = edx_47 | eax_27 u>> ecx_46.b << ecx_45
    return 0
}
