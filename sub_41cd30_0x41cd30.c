// 函数名称: sub_41cd30
// 虚拟地址: 0x41cd30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_41cd30(int32_t arg1)
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    char* ecx_1 = *(data_27e7a40 + 0x548) + arg1 * 0x700 + 0x2c0c1
    
    do
        if (*ecx_1 != 0)
            i.b = 1
            return i
        
        i += 1
        ecx_1 = &ecx_1[0x1c0]
    while (i s< 4)
    
    i.b = 0
    return i
}
