// 函数名称: sub_5ca180
// 虚拟地址: 0x5ca180
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ca180(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[0x17] != 0)
    if (arg1[0x17] != 0)
        void* ecx_1 = data_bed820
        int32_t eax_1 = *(ecx_1 + 0x58)
        
        if (eax_1 != 0)
            eax_1(ecx_1, arg1, arg1[0x18])
    
    int32_t result = sub_5c9fc0(arg1)
    
    if ((arg1[0xc].b & 1) != 0)
        result = sub_5ca150()
        
        if (result != 0)
            return sub_5c9da0(arg1)
    
    return result
}
