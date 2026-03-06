// 函数名称: sub_66f140
// 虚拟地址: 0x66f140
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_66f140(void* arg1, void* arg2 @ edi, int32_t arg3, char* arg4)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    if (arg2 u> 0xffffffff)
        sub_664320(arg1, "length exceeds PNG maxima")
        noreturn
    
    sub_66f010(arg1, arg2)
    
    if (arg4 != 0 && arg2 != 0)
        sub_666640(arg1, arg4, arg2)
        sub_662280(arg1, arg4, arg2)
    
    sub_66f0f0(arg1)
}
