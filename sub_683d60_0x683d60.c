// 函数名称: sub_683d60
// 虚拟地址: 0x683d60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_683d60(int32_t arg1)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    int32_t (** eax_1)(int32_t arg1) = (*esi[1])(esi, 1, 0x58)
    esi[0x73] = eax_1
    int32_t i = 0
    *eax_1 = sub_683c50
    eax_1[2] = sub_4d35a0
    eax_1[3] = sub_683d40
    eax_1[0x11] = 0
    eax_1[0xd] = 0
    
    if (esi[0x1e] s> 4)
        *(*esi + 0x14) = 0x37
        *(*esi + 0x18) = 4
        (**esi)(esi)
    
    if (esi[0x18] s> 0x100)
        *(*esi + 0x14) = 0x39
        *(*esi + 0x18) = 0x100
        (**esi)(esi)
    
    sub_6833c0(esi)
    int32_t result = sub_683520(esi)
    
    if (esi[0x16] == 2)
        result = esi[0x1c] * 2 + 4
        arg1 = result
        
        if (esi[0x1e] s> 0)
            int32_t* ebx_2 = esi[0x73] + 0x44
            
            do
                result = (*(esi[1] + 4))(esi, 1, arg1)
                *ebx_2 = result
                i += 1
                ebx_2 = &ebx_2[1]
            while (i s< esi[0x1e])
    
    return result
}
