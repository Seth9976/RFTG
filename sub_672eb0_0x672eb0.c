// 函数名称: sub_672eb0
// 虚拟地址: 0x672eb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_672eb0(int32_t arg1, int32_t arg2, char* arg3)
{
    // 第一条实际指令: int32_t i_4 = arg2
    int32_t i_4 = arg2
    int32_t eax = not.d(arg1)
    
    if (i_4 != 0)
        while ((arg3.b & 3) != 0)
            eax = eax u>> 8 ^ *(((zx.d(*arg3) ^ zx.d(eax.b)) << 2) + &data_830e08)
            arg3 = &arg3[1]
            int32_t i_7 = i_4
            i_4 -= 1
            
            if (i_7 == 1)
                break
    
    uint32_t i_5
    uint32_t i_6 = i_5
    
    if (i_4 u>= 0x20)
        i_5 = i_4 u>> 5
        uint32_t i
        
        do
            int32_t eax_2 = eax ^ *arg3
            int32_t edx_9 = *((zx.d((eax_2 u>> 0x10).b) << 2) + &data_831208)
                ^ *((zx.d((eax_2 u>> 8).b) << 2) + &data_831608)
                ^ *((eax_2 u>> 0x18 << 2) + &data_830e08) ^ *(((eax_2 & 0xff) << 2) + &data_831a08)
            int32_t edx_10 = edx_9 ^ *(arg3 + 4)
            int32_t eax_10 = *((zx.d((edx_10 u>> 0x10).b) << 2) + &data_831208)
                ^ *((zx.d((edx_10 u>> 8).b) << 2) + &data_831608)
                ^ *((edx_10 u>> 0x18 << 2) + &data_830e08) ^ *(((edx_10 & 0xff) << 2) + &data_831a08)
            int32_t eax_11 = eax_10 ^ *(arg3 + 8)
            int32_t edx_18 = *((zx.d((eax_11 u>> 0x10).b) << 2) + &data_831208)
                ^ *((zx.d((eax_11 u>> 8).b) << 2) + &data_831608)
                ^ *((eax_11 u>> 0x18 << 2) + &data_830e08) ^ *(((eax_11 & 0xff) << 2) + &data_831a08)
            int32_t edx_19 = edx_18 ^ *(arg3 + 0xc)
            int32_t eax_19 = *((zx.d((edx_19 u>> 0x10).b) << 2) + &data_831208)
                ^ *((zx.d((edx_19 u>> 8).b) << 2) + &data_831608)
                ^ *((edx_19 u>> 0x18 << 2) + &data_830e08) ^ *(((edx_19 & 0xff) << 2) + &data_831a08)
            int32_t eax_20 = eax_19 ^ *(arg3 + 0x10)
            int32_t edx_27 = *((zx.d((eax_20 u>> 0x10).b) << 2) + &data_831208)
                ^ *((zx.d((eax_20 u>> 8).b) << 2) + &data_831608)
                ^ *((eax_20 u>> 0x18 << 2) + &data_830e08) ^ *(((eax_20 & 0xff) << 2) + &data_831a08)
            int32_t edx_28 = edx_27 ^ *(arg3 + 0x14)
            int32_t eax_28 = *((zx.d((edx_28 u>> 0x10).b) << 2) + &data_831208)
                ^ *((zx.d((edx_28 u>> 8).b) << 2) + &data_831608)
                ^ *((edx_28 u>> 0x18 << 2) + &data_830e08) ^ *(((edx_28 & 0xff) << 2) + &data_831a08)
            arg3 = &arg3[0x20]
            int32_t eax_29 = eax_28 ^ *(arg3 - 8)
            i_4 -= 0x20
            int32_t edx_36 = *((zx.d((eax_29 u>> 0x10).b) << 2) + &data_831208)
                ^ *((zx.d((eax_29 u>> 8).b) << 2) + &data_831608)
                ^ *((eax_29 u>> 0x18 << 2) + &data_830e08) ^ *(((eax_29 & 0xff) << 2) + &data_831a08)
            int32_t edx_37 = edx_36 ^ *(arg3 - 4)
            eax = *((zx.d((edx_37 u>> 0x10).b) << 2) + &data_831208)
                ^ *((zx.d((edx_37 u>> 8).b) << 2) + &data_831608)
                ^ *((edx_37 u>> 0x18 << 2) + &data_830e08) ^ *(((edx_37 & 0xff) << 2) + &data_831a08)
            i = i_5
            i_5 -= 1
        while (i != 1)
    
    if (i_4 u>= 4)
        uint32_t i_3 = i_4 u>> 2
        uint32_t i_1
        
        do
            int32_t eax_37 = eax ^ *arg3
            arg3 = &arg3[4]
            int32_t edi_9 = *((zx.d((eax_37 u>> 0x10).b) << 2) + &data_831208)
                ^ *((zx.d((eax_37 u>> 8).b) << 2) + &data_831608)
                ^ *((eax_37 u>> 0x18 << 2) + &data_830e08) ^ *(((eax_37 & 0xff) << 2) + &data_831a08)
            i_4 -= 4
            i_1 = i_3
            i_3 -= 1
            eax = edi_9
        while (i_1 != 1)
    
    if (i_4 != 0)
        int32_t i_2
        
        do
            eax = eax u>> 8 ^ *(((zx.d(*arg3) ^ zx.d(eax.b)) << 2) + &data_830e08)
            arg3 = &arg3[1]
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
    
    return not.d(eax)
}
