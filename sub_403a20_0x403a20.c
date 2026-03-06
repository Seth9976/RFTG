// 函数名称: sub_403a20
// 虚拟地址: 0x403a20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_403a20()
{
    // 第一条实际指令: void* eax_2 = data_27e7a40
    void* eax_2 = data_27e7a40
    void* ecx = *(eax_2 + 0x548)
    
    if (*(ecx + 0x2c079) == 0 && *(ecx + 0x2c07a) == 0 && *(eax_2 + 0x630) == 0 && *(eax_2 + 0x638) == 0
            && *(eax_2 + 0x9fc) == 0 && *(eax_2 + 0xa10) == 0 && *(eax_2 + 0x964) == 0
            && *(eax_2 + 0x95c) == 0)
        return 0
    
    return 1
}
