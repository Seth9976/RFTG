// 函数名称: sub_474f30
// 虚拟地址: 0x474f30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_474f30(int32_t arg1 @ edi, void* arg2)
{
    // 第一条实际指令: int32_t var_10
    int32_t var_10
    
    if (data_27c060c != 0)
        int32_t var_c_1 = 1
        int32_t esi
        sub_41c490(esi, &var_10, 1)
    
    sub_4075c0()
    int32_t eax_1 = sub_474ca0(arg2)
    var_10 = eax_1
    int32_t var_c_2 = 1
    sub_42dd70(eax_1, 1, &var_10, &var_10, 1, 0, arg1)
    sub_407670()
    void* eax_2 = data_27e7a64
    data_27c05f4 = 2
    *(eax_2 + 4) += 1
    sub_409830()
    sub_40a160("single-player-start")
    return Concurrency::details::_StructuredTaskCollection::~_StructuredTaskCollection("
        started-single-player")
}
