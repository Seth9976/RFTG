// 函数名称: sub_5ca0e0
// 虚拟地址: 0x5ca0e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ca0e0(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax = arg1[0x17]
    int32_t eax = arg1[0x17]
    
    if (eax != 0)
        void* edx_1 = data_bed820
        int32_t ecx_1 = *(edx_1 + 0x58)
        
        if (ecx_1 != 0)
            ecx_1(edx_1, arg1, eax)
    
    if (data_bf7f98 != 0)
        sub_5d5830(arg1)
        int32_t eax_2
        int32_t edx_2
        edx_2:eax_2 = sx.q(arg1[7])
        int32_t eax_6
        int32_t edx_3
        edx_3:eax_6 = sx.q(arg1[6])
        sub_5d5b60(arg1, (eax_6 - edx_3) s>> 1, (eax_2 - edx_2) s>> 1)
    
    return sub_5c9fc0(arg1)
}
