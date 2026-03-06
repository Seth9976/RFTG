// 函数名称: sub_6351c0
// 虚拟地址: 0x6351c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6351c0(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, char arg5, char arg6, char arg7, char arg8)
{
    // 第一条实际指令: if (arg4 == 1)
    if (arg4 == 1)
        int16_t* edi_3 = *(arg1 + 0x10) * arg3 + *(arg1 + 0x14) + (arg2 << 1)
        uint32_t ecx_15 = zx.d(*edi_3)
        void* ebx_8 = data_8bac74
        int32_t eax_35
        int32_t edx_37
        edx_37:eax_35 =
            mulu.dp.d(0x80808081, zx.d(*((ecx_15 u>> 0xa & 0x1f) + ebx_8)) * (0xff - zx.d(arg8)))
        int32_t eax_37
        int32_t edx_45
        edx_45:eax_37 =
            mulu.dp.d(0x80808081, zx.d(*((ecx_15 u>> 5 & 0x1f) + ebx_8)) * (0xff - zx.d(arg8)))
        int32_t eax_40
        int32_t edx_48
        edx_48:eax_40 = mulu.dp.d(0x80808081, zx.d(*((ecx_15 & 0x1f) + ebx_8)) * (0xff - zx.d(arg8)))
        *edi_3 = ((((((edx_37 u>> 7).w + zx.w(arg5)) * 0x80) & 0xfc1f)
            | (((edx_45 u>> 7).w + zx.w(arg6)) * 4)) & 0xffe0) | (((edx_48 u>> 7) + zx.d(arg7)) u>> 3).w
        return 0
    
    if (arg4 != 2)
        if (arg4 == 4)
            void* edi = data_8bac74
            int16_t* esi_1 = *(arg1 + 0x10) * arg3 + *(arg1 + 0x14) + (arg2 << 1)
            uint32_t ecx_4 = zx.d(*esi_1)
            int32_t eax_14
            int32_t edx_7
            edx_7:eax_14 = mulu.dp.d(0x80808081, zx.d(*((ecx_4 u>> 0xa & 0x1f) + edi)) * zx.d(arg5))
            int32_t eax_16
            int32_t edx_14
            edx_14:eax_16 = mulu.dp.d(0x80808081, zx.d(*((ecx_4 u>> 5 & 0x1f) + edi)) * zx.d(arg6))
            int32_t eax_17
            int32_t edx_17
            edx_17:eax_17 = mulu.dp.d(0x80808081, zx.d(*((ecx_4 & 0x1f) + edi)) * zx.d(arg7))
            *esi_1 = (((((edx_7 u>> 7 & 0xfff8) << 5).w | (edx_14 u>> 7).w) & 0xfff8) * 4)
                | (edx_17 u>> 0xa).w
            return 0
        
        uint16_t eax_5
        eax_5.b = arg7
        eax_5.b u>>= 3
        *(*(arg1 + 0x10) * arg3 + *(arg1 + 0x14) + (arg2 << 1)) =
            ((((zx.w(arg5) & 0xfff8) << 5 | zx.w(arg6)) & 0xfff8) * 4) | zx.w(eax_5.b)
        return 0
    
    int32_t ecx_10 = *(arg1 + 0x10) * arg3 + *(arg1 + 0x14)
    uint32_t eax_20 = zx.d(*(ecx_10 + (arg2 << 1)))
    void* ecx_11 = data_8bac74
    uint32_t eax_24 = zx.d(*((eax_20 u>> 0xa & 0x1f) + ecx_11)) + zx.d(arg5)
    
    if (eax_24 u> 0xff)
        eax_24 = 0xff
    
    uint32_t edi_2 = zx.d(*((eax_20 u>> 5 & 0x1f) + ecx_11)) + zx.d(arg6)
    
    if (edi_2 u> 0xff)
        edi_2 = 0xff
    
    uint32_t edx_27 = zx.d(*((eax_20 & 0x1f) + ecx_11)) + zx.d(arg7)
    
    if (edx_27 u> 0xff)
        edx_27 = 0xff
    
    *(ecx_10 + (arg2 << 1)) = (((((eax_24 & 0xfff8) << 5).w | edi_2.w) & 0xfff8) * 4) | (edx_27 u>> 3).w
    return 0
}
