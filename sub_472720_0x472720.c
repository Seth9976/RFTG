// 函数名称: sub_472720
// 虚拟地址: 0x472720
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_472720(int32_t* arg1)
{
    // 第一条实际指令: void* edi = *(data_27e7a40 + 0x548)
    void* edi = *(data_27e7a40 + 0x548)
    sub_4afc80()
    
    for (int32_t i = sub_4b0830(arg1); i != 0; i = sub_4b0830(arg1))
        if (arg1[0x7b1].b != 0)
            return i
        
        if (*(arg1 + 0x1ec3) != 0)
            break
        
        if (*(edi + 0x2c068) == 0)
            *(edi + 0x2c0a0) = 1
            sub_406ad0()
            *(edi + 0x2c0a0) = 0
        
        __builtin_memset(&data_c021dc, 0, 0x28)
    
    return sub_4b21d0(arg1)
}
