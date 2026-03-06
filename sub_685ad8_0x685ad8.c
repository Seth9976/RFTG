// 函数名称: sub_685ad8
// 虚拟地址: 0x685ad8
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_685ad8(int32_t* arg1)
{
    // 第一条实际指令: void* result = ___getgmtimebuf()
    void* result = ___getgmtimebuf()
    int128_t* result_1 = result
    
    if (result_1 == 0)
        return result
    
    int32_t eax = sub_685850(result_1, arg1)
    int32_t eax_1 = neg.d(eax)
    return not.d(sbb.d(eax_1, eax_1, eax != 0)) & result_1
}
