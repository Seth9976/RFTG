// 函数名称: sub_5a0f60
// 虚拟地址: 0x5a0f60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_5a0f60(int32_t* arg1, uint32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t* eax
    int32_t* eax
    int32_t edx
    eax, edx = sub_5a898b(arg1, "rb")
    
    if (eax == 0)
        data_273ac1c = "can't fopen"
        return eax
    
    int32_t eax_1 = sub_5a0fb0(eax, edx, arg3, eax, arg2)
    sub_5a8c61(eax)
    return eax_1
}
