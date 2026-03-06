// 函数名称: sub_62fe50
// 虚拟地址: 0x62fe50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_62fe50(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t i
    int32_t i
    
    do
        int32_t eax
        int32_t* edx
        edx:eax = mulu.dp.d(arg1, *arg2)
        int32_t i_1
        i = i_1
        i_1 -= 1
        arg2:arg1 = mulu.dp.d(eax, *edx)
    while (i != 1)
    __bound_gprv_mema32(arg1, *arg1)
    int32_t eflags
    char temp0_1
    char temp1
    temp0_1, temp1, eflags = __aad_immb(0xf7, arg1.b, arg1:1.b)
    arg1.b = temp0_1
    arg1:1.b = temp1
    __bound_gprv_mema32(arg1, *arg1)
    undefined
}
