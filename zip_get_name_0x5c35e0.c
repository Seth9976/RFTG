// 函数名称: zip_get_name
// 虚拟地址: 0x5c35e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*zip_get_name(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: void* result = sub_5bfc00(arg1, arg2, arg3, arg4, arg1 + 8)
    void* result = sub_5bfc00(arg1, arg2, arg3, arg4, arg1 + 8)
    
    if (result != 0)
        return sub_5bf220(*(result + 0x30), nullptr, arg4.b, arg1 + 8)
    
    return result
}
