// 函数名称: sub_5d1fe0
// 虚拟地址: 0x5d1fe0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_5d1fe0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    int32_t var_c = 0x44c
    int32_t* var_10 = esi
    int32_t var_14 = zx.d(data_bed768) * 0x484 + 0xbee780
    sub_5cd110()
    int32_t* eax_3 = data_bf7804
    
    if ((*(*eax_3 + 0xc))(eax_3, &esi[1], &arg1, 0) s>= 0)
        int32_t* ecx_1 = arg1
        int32_t* eax_8 = zx.d(data_bed768) * 0x484 + 0xbeebd4
        *eax_8 = 0x2c
        
        if ((*(*ecx_1 + 0xc))(ecx_1, eax_8) s>= 0)
            int32_t var_c_2 = sub_5cd1d0(zx.d(data_bed768) * 0x484 + 0xbee9b0) * 2 + 2
            int32_t var_10_2 = zx.d(data_bed768) * 0x484 + 0xbee9b0
            *(zx.d(data_bed768) * 0x484 + 0xbeebcc) = sub_5dd160("UTF-8", "UTF-16LE")
            int32_t* eax_18 = arg1
            (*(*eax_18 + 8))(eax_18)
            uint32_t eax_20
            eax_20.b = data_bed768 + 1
            data_bed768 = eax_20.b
            return neg.d(sbb.d(eax_20, eax_20, eax_20.b u< 0x20))
        
        int32_t* eax_11 = arg1
        (*(*eax_11 + 8))(eax_11)
    
    return 1
}
