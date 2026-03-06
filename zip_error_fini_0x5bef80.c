// 函数名称: zip_error_fini
// 虚拟地址: 0x5bef80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tzip_error_fini(void* arg1)
{
    // 第一条实际指令: int32_t result = __free_base(*(arg1 + 8))
    int32_t result = __free_base(*(arg1 + 8))
    *(arg1 + 8) = 0
    return result
}
