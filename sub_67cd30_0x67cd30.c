// 函数名称: sub_67cd30
// 虚拟地址: 0x67cd30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_67cd30()
{
    // 第一条实际指令: void* entry_ebx
    void* entry_ebx
    void* esi = (**(entry_ebx + 4))(entry_ebx, 1, 0x580) + 0x100
    *(entry_ebx + 0x144) = esi
    sub_5abfc0(esi - 0x100, 0, 0x100)
    
    for (char* i = nullptr; i s<= 0xff; i = &i[1])
        *(i + esi) = i.b
    
    sub_5abfc0(esi + 0x100, 0xff, 0x180)
    int128_t* result = sub_5abfc0(esi + 0x280, 0, 0x180)
    __builtin_memcpy(esi + 0x400, *(entry_ebx + 0x144), 0x80)
    return result
}
