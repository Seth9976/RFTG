// 函数名称: sub_5dd570
// 虚拟地址: 0x5dd570
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5dd570(uint32_t arg1, uint8_t* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: uint32_t esi = arg1
    uint32_t esi = arg1
    uint32_t nNumberOfBytesToRead = arg3 * arg4
    uint32_t nNumberOfBytesToRead_3 = 0
    
    if (esi != 0 && *(esi + 0x1c) != 0xffffffff && nNumberOfBytesToRead != 0)
        uint32_t nNumberOfBytesToRead_5 = *(esi + 0x28)
        
        if (nNumberOfBytesToRead_5 != 0)
            nNumberOfBytesToRead_3 = nNumberOfBytesToRead
            
            if (nNumberOfBytesToRead u>= nNumberOfBytesToRead_5)
                nNumberOfBytesToRead_3 = nNumberOfBytesToRead_5
            
            uint32_t nNumberOfBytesToRead_4 = nNumberOfBytesToRead_3
            int32_t var_18_1 = *(esi + 0x24) + *(esi + 0x20) - nNumberOfBytesToRead_5
            uint8_t* var_1c_1 = arg2
            sub_5cd110()
            *(esi + 0x28) -= nNumberOfBytesToRead_3
            
            if (nNumberOfBytesToRead_3 == nNumberOfBytesToRead)
                return arg4
            
            arg2 = &arg2[nNumberOfBytesToRead_3]
            nNumberOfBytesToRead -= nNumberOfBytesToRead_3
        
        if (nNumberOfBytesToRead u>= 0x400)
            if (ReadFile(*(esi + 0x1c), arg2, nNumberOfBytesToRead, &arg1, nullptr) != 0)
                return divu.dp.d(0:(nNumberOfBytesToRead_3 + arg1), arg3)
        else if (ReadFile(*(esi + 0x1c), *(esi + 0x20), 0x400, &arg1, nullptr) != 0)
            uint32_t nNumberOfBytesToRead_2 = arg1
            
            if (nNumberOfBytesToRead u>= nNumberOfBytesToRead_2)
                nNumberOfBytesToRead = nNumberOfBytesToRead_2
            
            uint32_t nNumberOfBytesToRead_1 = nNumberOfBytesToRead
            int32_t var_18_3 = *(esi + 0x20)
            uint8_t* var_1c_2 = arg2
            sub_5cd110()
            uint32_t eax_9 = arg1
            *(esi + 0x24) = eax_9
            *(esi + 0x28) = eax_9 - nNumberOfBytesToRead
            return divu.dp.d(0:(nNumberOfBytesToRead_3 + nNumberOfBytesToRead), arg3)
        
        sub_5cd050(1)
    
    return 0
}
