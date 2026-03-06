// 函数名称: sub_6805f0
// 虚拟地址: 0x6805f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* (**sub_6805f0(int128_t** arg1))(int32_t* arg1)
{
    // 第一条实际指令: int128_t** esi = arg1
    int128_t** esi = arg1
    void* (** result)(int32_t* arg1) = (*esi[1])(esi, 1, 0x54)
    esi[0x70] = result
    *result = sub_680300
    int32_t i = 0
    
    if (esi[9] s> 0)
        arg1 = &esi[0x36][5]
        void* ebx_2 = &result[0xb]
        
        do
            int128_t* eax_2 = (*esi[1])(esi, 1, 0x100)
            *arg1 = eax_2
            result = sub_5abfc0(eax_2, 0, 0x100)
            arg1 = &arg1[0x15]
            *ebx_2 = 0xffffffff
            i += 1
            ebx_2 += 4
        while (i s< esi[9])
    
    return result
}
