// 函数名称: sub_664410
// 虚拟地址: 0x664410
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_664410(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x54)
    int32_t eax = *(arg1 + 0x54)
    
    if (eax != 0)
        return eax(arg1, arg2, arg3)
    
    sub_664320(arg1, "Call to NULL read function")
    noreturn
}
