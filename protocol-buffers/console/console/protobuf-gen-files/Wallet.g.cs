// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: wallet.proto
#pragma warning disable 1591, 0612, 3021
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Research.ProtoBuf {

  /// <summary>Holder for reflection information generated from wallet.proto</summary>
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute()]
  public static partial class WalletReflection {

    #region Descriptor
    /// <summary>File descriptor for wallet.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static WalletReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "Cgx3YWxsZXQucHJvdG8SEVJlc2VhcmNoLlByb3RvQnVmIt0BCgZXYWxsZXQS",
            "LQoFY2FyZHMYASADKAsyHi5SZXNlYXJjaC5Qcm90b0J1Zi5XYWxsZXQuQ2Fy",
            "ZBIMCgRjYXNoGAIgASgFGmgKBENhcmQSMAoEdHlwZRgBIAEoDjIiLlJlc2Vh",
            "cmNoLlByb3RvQnVmLldhbGxldC5DYXJkVHlwZRIOCgZ2ZW5kb3IYAiABKAkS",
            "DgoGbnVtYmVyGAMgASgJEg4KBmV4cGlyeRgEIAEoCSIsCghDYXJkVHlwZRIJ",
            "CgVEZWJpdBAAEgoKBkNyZWRpdBABEgkKBVN0b3JlEAJiBnByb3RvMw=="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { },
          new pbr::GeneratedCodeInfo(null, new pbr::GeneratedCodeInfo[] {
            new pbr::GeneratedCodeInfo(typeof(global::Research.ProtoBuf.Wallet), global::Research.ProtoBuf.Wallet.Parser, new[]{ "Cards", "Cash" }, null, new[]{ typeof(global::Research.ProtoBuf.Wallet.Types.CardType) }, new pbr::GeneratedCodeInfo[] { new pbr::GeneratedCodeInfo(typeof(global::Research.ProtoBuf.Wallet.Types.Card), global::Research.ProtoBuf.Wallet.Types.Card.Parser, new[]{ "Type", "Vendor", "Number", "Expiry" }, null, null, null)})
          }));
    }
    #endregion

  }
  #region Messages
  [global::System.Diagnostics.DebuggerNonUserCodeAttribute()]
  public sealed partial class Wallet : pb::IMessage<Wallet> {
    private static readonly pb::MessageParser<Wallet> _parser = new pb::MessageParser<Wallet>(() => new Wallet());
    public static pb::MessageParser<Wallet> Parser { get { return _parser; } }

    public static pbr::MessageDescriptor Descriptor {
      get { return global::Research.ProtoBuf.WalletReflection.Descriptor.MessageTypes[0]; }
    }

    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    public Wallet() {
      OnConstruction();
    }

    partial void OnConstruction();

    public Wallet(Wallet other) : this() {
      cards_ = other.cards_.Clone();
      cash_ = other.cash_;
    }

    public Wallet Clone() {
      return new Wallet(this);
    }

    /// <summary>Field number for the "cards" field.</summary>
    public const int CardsFieldNumber = 1;
    private static readonly pb::FieldCodec<global::Research.ProtoBuf.Wallet.Types.Card> _repeated_cards_codec
        = pb::FieldCodec.ForMessage(10, global::Research.ProtoBuf.Wallet.Types.Card.Parser);
    private readonly pbc::RepeatedField<global::Research.ProtoBuf.Wallet.Types.Card> cards_ = new pbc::RepeatedField<global::Research.ProtoBuf.Wallet.Types.Card>();
    public pbc::RepeatedField<global::Research.ProtoBuf.Wallet.Types.Card> Cards {
      get { return cards_; }
    }

    /// <summary>Field number for the "cash" field.</summary>
    public const int CashFieldNumber = 2;
    private int cash_;
    public int Cash {
      get { return cash_; }
      set {
        cash_ = value;
      }
    }

    public override bool Equals(object other) {
      return Equals(other as Wallet);
    }

    public bool Equals(Wallet other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if(!cards_.Equals(other.cards_)) return false;
      if (Cash != other.Cash) return false;
      return true;
    }

    public override int GetHashCode() {
      int hash = 1;
      hash ^= cards_.GetHashCode();
      if (Cash != 0) hash ^= Cash.GetHashCode();
      return hash;
    }

    public override string ToString() {
      return pb::JsonFormatter.ToDiagnosticString(this);
    }

    public void WriteTo(pb::CodedOutputStream output) {
      cards_.WriteTo(output, _repeated_cards_codec);
      if (Cash != 0) {
        output.WriteRawTag(16);
        output.WriteInt32(Cash);
      }
    }

    public int CalculateSize() {
      int size = 0;
      size += cards_.CalculateSize(_repeated_cards_codec);
      if (Cash != 0) {
        size += 1 + pb::CodedOutputStream.ComputeInt32Size(Cash);
      }
      return size;
    }

    public void MergeFrom(Wallet other) {
      if (other == null) {
        return;
      }
      cards_.Add(other.cards_);
      if (other.Cash != 0) {
        Cash = other.Cash;
      }
    }

    public void MergeFrom(pb::CodedInputStream input) {
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            input.SkipLastField();
            break;
          case 10: {
            cards_.AddEntriesFrom(input, _repeated_cards_codec);
            break;
          }
          case 16: {
            Cash = input.ReadInt32();
            break;
          }
        }
      }
    }

    #region Nested types
    /// <summary>Container for nested types declared in the Wallet message type.</summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute()]
    public static partial class Types {
      public enum CardType {
        Debit = 0,
        Credit = 1,
        Store = 2,
      }

      [global::System.Diagnostics.DebuggerNonUserCodeAttribute()]
      public sealed partial class Card : pb::IMessage<Card> {
        private static readonly pb::MessageParser<Card> _parser = new pb::MessageParser<Card>(() => new Card());
        public static pb::MessageParser<Card> Parser { get { return _parser; } }

        public static pbr::MessageDescriptor Descriptor {
          get { return global::Research.ProtoBuf.Wallet.Descriptor.NestedTypes[0]; }
        }

        pbr::MessageDescriptor pb::IMessage.Descriptor {
          get { return Descriptor; }
        }

        public Card() {
          OnConstruction();
        }

        partial void OnConstruction();

        public Card(Card other) : this() {
          type_ = other.type_;
          vendor_ = other.vendor_;
          number_ = other.number_;
          expiry_ = other.expiry_;
        }

        public Card Clone() {
          return new Card(this);
        }

        /// <summary>Field number for the "type" field.</summary>
        public const int TypeFieldNumber = 1;
        private global::Research.ProtoBuf.Wallet.Types.CardType type_ = global::Research.ProtoBuf.Wallet.Types.CardType.Debit;
        public global::Research.ProtoBuf.Wallet.Types.CardType Type {
          get { return type_; }
          set {
            type_ = value;
          }
        }

        /// <summary>Field number for the "vendor" field.</summary>
        public const int VendorFieldNumber = 2;
        private string vendor_ = "";
        public string Vendor {
          get { return vendor_; }
          set {
            vendor_ = pb::Preconditions.CheckNotNull(value, "value");
          }
        }

        /// <summary>Field number for the "number" field.</summary>
        public const int NumberFieldNumber = 3;
        private string number_ = "";
        public string Number {
          get { return number_; }
          set {
            number_ = pb::Preconditions.CheckNotNull(value, "value");
          }
        }

        /// <summary>Field number for the "expiry" field.</summary>
        public const int ExpiryFieldNumber = 4;
        private string expiry_ = "";
        public string Expiry {
          get { return expiry_; }
          set {
            expiry_ = pb::Preconditions.CheckNotNull(value, "value");
          }
        }

        public override bool Equals(object other) {
          return Equals(other as Card);
        }

        public bool Equals(Card other) {
          if (ReferenceEquals(other, null)) {
            return false;
          }
          if (ReferenceEquals(other, this)) {
            return true;
          }
          if (Type != other.Type) return false;
          if (Vendor != other.Vendor) return false;
          if (Number != other.Number) return false;
          if (Expiry != other.Expiry) return false;
          return true;
        }

        public override int GetHashCode() {
          int hash = 1;
          if (Type != global::Research.ProtoBuf.Wallet.Types.CardType.Debit) hash ^= Type.GetHashCode();
          if (Vendor.Length != 0) hash ^= Vendor.GetHashCode();
          if (Number.Length != 0) hash ^= Number.GetHashCode();
          if (Expiry.Length != 0) hash ^= Expiry.GetHashCode();
          return hash;
        }

        public override string ToString() {
          return pb::JsonFormatter.ToDiagnosticString(this);
        }

        public void WriteTo(pb::CodedOutputStream output) {
          if (Type != global::Research.ProtoBuf.Wallet.Types.CardType.Debit) {
            output.WriteRawTag(8);
            output.WriteEnum((int) Type);
          }
          if (Vendor.Length != 0) {
            output.WriteRawTag(18);
            output.WriteString(Vendor);
          }
          if (Number.Length != 0) {
            output.WriteRawTag(26);
            output.WriteString(Number);
          }
          if (Expiry.Length != 0) {
            output.WriteRawTag(34);
            output.WriteString(Expiry);
          }
        }

        public int CalculateSize() {
          int size = 0;
          if (Type != global::Research.ProtoBuf.Wallet.Types.CardType.Debit) {
            size += 1 + pb::CodedOutputStream.ComputeEnumSize((int) Type);
          }
          if (Vendor.Length != 0) {
            size += 1 + pb::CodedOutputStream.ComputeStringSize(Vendor);
          }
          if (Number.Length != 0) {
            size += 1 + pb::CodedOutputStream.ComputeStringSize(Number);
          }
          if (Expiry.Length != 0) {
            size += 1 + pb::CodedOutputStream.ComputeStringSize(Expiry);
          }
          return size;
        }

        public void MergeFrom(Card other) {
          if (other == null) {
            return;
          }
          if (other.Type != global::Research.ProtoBuf.Wallet.Types.CardType.Debit) {
            Type = other.Type;
          }
          if (other.Vendor.Length != 0) {
            Vendor = other.Vendor;
          }
          if (other.Number.Length != 0) {
            Number = other.Number;
          }
          if (other.Expiry.Length != 0) {
            Expiry = other.Expiry;
          }
        }

        public void MergeFrom(pb::CodedInputStream input) {
          uint tag;
          while ((tag = input.ReadTag()) != 0) {
            switch(tag) {
              default:
                input.SkipLastField();
                break;
              case 8: {
                type_ = (global::Research.ProtoBuf.Wallet.Types.CardType) input.ReadEnum();
                break;
              }
              case 18: {
                Vendor = input.ReadString();
                break;
              }
              case 26: {
                Number = input.ReadString();
                break;
              }
              case 34: {
                Expiry = input.ReadString();
                break;
              }
            }
          }
        }

      }

    }
    #endregion

  }

  #endregion

}

#endregion Designer generated code
